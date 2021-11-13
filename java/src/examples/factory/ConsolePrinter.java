package examples.factory;

public class ConsolePrinter implements Printer {
    @Override
    public <T> void print(T data) {
        System.out.println(data);
    }
}
