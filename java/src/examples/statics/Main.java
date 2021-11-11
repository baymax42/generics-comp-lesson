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

        for (int i = 0; i < 10; i++) {
            new TypeCounter<Double>(Double.class);
        }
        System.out.println(TypeCounter.getCount(Double.class));

        for (int i = 0; i < 10; i++) {
            new TypeCounter<Integer>(Integer.class);
        }
        // This won't compile!
        //System.out.println(Counter<Integer>.count);
        System.out.println(TypeCounter.getCount(Integer.class));
    }
}
