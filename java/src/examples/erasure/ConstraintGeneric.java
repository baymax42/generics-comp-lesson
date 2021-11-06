package examples.erasure;

public class ConstraintGeneric<T extends Comparable> {
    private T someData;

    public T getSomeData() {
        return someData;
    }
}
