package examples.factory;

import java.util.HashMap;
import java.util.Map;

public class PrinterFactory implements Factory<Printer> {
    Map<Class<?>, Printer> registeredPrinters = new HashMap<>();

    public <T> void registerFactory(Class<T> dataType, Printer printer) {
        registeredPrinters.put(dataType, printer);
    }

    @Override
    public <T> Printer build(Class<T> type) {
        Printer printer = registeredPrinters.get(type);
        if (printer != null) {
            return printer;
        }
        return new ConsolePrinter();
    }
}
