package examples.wildcard;

import java.util.ArrayList;
import java.util.List;

public class WildcardGeneric {
    public int countThingsWildcard(List<?> things) {
        return things.size();
    }

    public Object getSomething(List<? extends Object> things) {
        return things.get(0);
    }

    public static void main(String[] args) {
        List<Integer> integers = new ArrayList<>();
        integers.add(10);

        WildcardGeneric generic = new WildcardGeneric();

        System.out.println(generic.countThingsWildcard(integers));
        System.out.println(generic.getSomething(integers));
    }
}
