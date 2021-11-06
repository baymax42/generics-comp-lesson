package examples.statics;

public class Counter<T> {
    public static int count = 0;

    public Counter() {
        count++;
    }
}
