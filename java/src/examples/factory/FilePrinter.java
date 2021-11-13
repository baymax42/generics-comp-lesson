package examples.factory;

import java.io.BufferedWriter;
import java.io.FileWriter;

public class FilePrinter implements Printer {
    private final String fileName;

    public FilePrinter(String destinationName) {
        fileName = destinationName;
    }

    @Override
    public <T> void print(T data) {
        try {
            FileWriter fileWriter = new FileWriter(fileName);
            BufferedWriter out = new BufferedWriter(fileWriter);
            out.write(data.toString());
            out.close();
        } catch (Exception e){
            System.err.println("Couldn't write to file: " + e.getMessage());
        }
    }
}
