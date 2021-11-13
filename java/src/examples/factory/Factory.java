package examples.factory;

import java.util.HashMap;
import java.util.Map;

public interface Factory<Type> {
    Map<Class<?>, Factory<?>> registeredFactories = new HashMap<>();

    static <T> Factory<T> getFactory(Class<T> type) {
        Factory<T> factory = (Factory<T>) registeredFactories.get(type);
        if (factory != null) {
            return factory;
        }
        throw new RuntimeException("No factory registered for such type: " + type.getName());
    }

    static <T> void registerFactory(Class<T> dataType, Factory<T> dataFactory) {
        registeredFactories.put(dataType, dataFactory);
    }

    <T> Type build(Class<T> type);
}
