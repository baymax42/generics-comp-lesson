package examples.simple;

public class Box<T> {
    private T value;

    public Box(T value) {
        this.value = value;
    }

    public T getValue() {
        return value;
    }

    public static void main(String[] args) {
        /**
         * Box example
         */
        Box<Integer> wrapped = new Box<>(10);
        Box<String> wrappedString = new Box<>("abcd");

        System.out.println(wrapped.getValue());
        System.out.println(wrappedString.getValue());
    }
}
