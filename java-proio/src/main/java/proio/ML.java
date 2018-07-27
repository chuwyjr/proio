
package proio;

import java.io.*;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import com.google.protobuf.ByteString;
import com.google.protobuf.Descriptors;
import com.google.protobuf.Message;

public class ML {
  public static void main(String[] args) {
    String tool = "o";
    Long index = Long.parseLong("0");
    if (args.length == 2) {
      tool = args[1].toString();
    } else if (args.length == 3) {
      tool = args[1].toString();
      index = Long.parseLong(args[2]);
    }
    Tool tools = Tool.valueOf(tool);
    switch (tools) {
    case s: {
      try {
        event_seeker(args[0], index);
      } catch (IOException e) {
        e.printStackTrace();
      }
    }
      break;
    case i: {
      try {
        event_seeker(args[0], Long.MAX_VALUE);
      } catch (IOException e) {
        e.printStackTrace();
      }
    }
      break;
    case h:
      System.out.print(
          "s + #:to seek events use s and a number you wish to see\ni:to see information of the file\nh:to get help");
      break;
    default: {
      if (args.length != 1) {
        System.out.println("Please provide one argument for the input file name");
        return;
      }

      try {
        Reader reader = new Reader(args[0]);
        int nEvents = 0;
        Map<String, ByteString> lastMetadata = new HashMap<String, ByteString>();
        /**/ for (Event event : reader) {
          Map<String, ByteString> metadata = event.getMetadata();
          for (Map.Entry<String, ByteString> entry : metadata.entrySet()) {
            if (lastMetadata.get(entry.getKey()) != entry.getValue()) {
              System.out.println("Metadata: " + entry.getKey() + ": " + entry.getValue().toStringUtf8());
            }
          }
          lastMetadata = metadata;
          System.out.println("EVENT: " + nEvents);
          for (String tag : event.getTags()) {
            System.out.println(tag);
            for (long id : event.getTaggedEntries(tag)) {
              Message entry = event.getEntry(id);
              System.out.println("-------------------");
              System.out.println(getMessageString(entry).replaceAll("\n", "\n\t"));
              System.out.println("-------------------");
            }
          }
          nEvents++;
        }

        reader.close();
      } catch (Throwable e) {
        e.printStackTrace();
      }
      break;
    }
    }
  }

  // Performs heavy lifting for collection entry introspection
  private static String getMessageString(Message msg) {
    String returnString = "";

    Descriptors.Descriptor desc = msg.getDescriptorForType();
    List<Descriptors.FieldDescriptor> fields = desc.getFields();

    for (Descriptors.FieldDescriptor field : fields) {
      if (!field.isRepeated()) {
        if (msg.hasField(field)) {
          returnString = returnString + "\n" + field.getName() + ": ";
          Object value = msg.getField(field);
          returnString = returnString + getFieldValueString(field, value);
        }
      } else {
        int count = msg.getRepeatedFieldCount(field);
        for (int i = 0; i < count; i++) {
          returnString = returnString + "\n" + field.getName() + "[" + Integer.toString(i) + "]: ";
          Object value = msg.getRepeatedField(field, i);
          String fieldString = getFieldValueString(field, value);
          returnString = returnString + fieldString;
        }
      }
    }

    return returnString;
  }

  // Performs heavy lifting for collection entry introspection
  private static String getFieldValueString(Descriptors.FieldDescriptor field, Object value) {
    String returnString = "";

    switch (field.getType()) {
    case INT32:
    case UINT32:
      returnString = Integer.toString((Integer) value);
      break;
    case INT64:
    case UINT64:
      returnString = Long.toString((Long) value);
      break;
    case FLOAT:
      returnString = Float.toString((Float) value);
      break;
    case DOUBLE:
      returnString = Double.toString((Double) value);
      break;
    case STRING:
      returnString = (String) value;
      break;
    case MESSAGE:
      returnString = getMessageString((Message) value).replaceAll("\n", "\n\t");
      break;
    }
    return returnString;
  }

  private static String event_seeker(String args, Long index) throws IOException {
    String tool = "o";
    if (index == Long.MAX_VALUE) {
      tool = "i";
    }
    Tool tools = Tool.valueOf(tool);
    try {
      Reader reader = new Reader(args);
      switch (tools) {
      case i: {
        long nevents = 0;
        Event storeevent = null;
        Event tmpEvent;
        while (true) {
          tmpEvent = null;
          try {
            tmpEvent = reader.next(true);
          } catch (Throwable e) {
            ;
          }
          if (tmpEvent == null) {
            break;
          }
          storeevent = tmpEvent;
        }
        Map<String, ByteString> metadata = storeevent.getMetadata();
        for (Map.Entry<String, ByteString> entry : metadata.entrySet()) {
          if (!entry.getKey().equals("logfile")) {
           System.out.println("Metadata: " + entry.getKey() + ": " + entry.getValue().toStringUtf8());
          }
        }
        break;
      }
      default: {
        reader.skip(index);
        Event event = reader.next();
        for (long entryID : event.getTaggedEntries("MCParameters")) {
          System.out.println(event.getEntry(entryID).toString());
        }
      }
        break;
      }
    } catch (Throwable e) {
      System.out.println(e);
    }
    return "";
  }

  public  enum Tool {
    s, i, h, o;
  }
}