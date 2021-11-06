package examples.statics;

public class Main {
    public static void main(String[] args) {
        for (int i = 0; i < 10; i++) {
            new Counter<Double>();
        }
        System.out.println(Counter.count);

        for (int i = 0; i < 10; i++) {
            new Counter<Integer>();
        }
        // This won't compile!
        //System.out.println(Counter<Integer>.count);
        System.out.println(Counter.count);
    }
}
