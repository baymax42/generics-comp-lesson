package examples.factory;

public class OstreamPrinter implements Printer {
    @Override
    public <T> void print(T data) {
        System.out.println(data);
    }
}
