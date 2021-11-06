package compiled.simple;

public class Box {

    public Box(Object value) {
        this.value = value;
    }

    public Object getValue() {
        return value;
    }

    public static void main(String args[]) {
        Box wrapped = new Box(Integer.valueOf(10));
        Box wrappedString = new Box("abcd");
        System.out.println(wrapped.getValue());
        System.out.println((String) wrappedString.getValue());
    }

    private Object value;
}
