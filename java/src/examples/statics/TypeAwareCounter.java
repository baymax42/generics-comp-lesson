package examples.statics;

import java.util.*;

class TypeCounter<T> {
    public static Map<Class<?>, Integer> counts = new HashMap<>();

    public TypeCounter(Class<T> c) {
        counts.put(c, counts.getOrDefault(c, 0) + 1);
    }

    public static int getCount(Class<?> c) {
        return TypeCounter.counts.getOrDefault(c, 0);
    }
}