package examples.factory;

public class Main {
    static <T> void printData(T data) {
        try {
            Factory<Printer> printerFactory = Factory.getFactory(Printer.class);
            Printer printer = printerFactory.build(data.getClass());
            printer.print(data);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    static void initializeFactory() {
        PrinterFactory printerFactory = new PrinterFactory();
        printerFactory.registerFactory(FileContent.class, new FilePrinter("tmp_FileContent.txt"));

        Factory.registerFactory(Printer.class, printerFactory);
    }

    static public void main(String[] args) {
        initializeFactory();
        FileContent fileContent = new FileContent("This is body of the file", "tags: [abcd]");

        printData(fileContent);
        printData("This should print in console");
        printData(42);
    }
}
