package compiled.wildcard;

import java.io.PrintStream;
import java.util.ArrayList;
import java.util.List;

public class WildcardGeneric {

    public WildcardGeneric() {
    }

    public int countThingsWildcard(List things) {
        return things.size();
    }

    public Object getSomething(List things) {
        return things.get(0);
    }

    public static void main(String args[]) {
        List integers = new ArrayList();
        integers.add(Integer.valueOf(10));
        WildcardGeneric generic = new WildcardGeneric();
        System.out.println(generic.countThingsWildcard(integers));
        System.out.println(generic.getSomething(integers));
    }
}