//package examples.illegal;
//
//public class Specialization {
//    public static void main(String[] args) {
//        Bar<String> bar = new Bar<>();
//        bar.get("example");
//    }
//
//    public static class Bar<T> {
//        public T get(T x) {
//            return null;
//        }
//
//        // This won't work in Java - no specialization
//        public String get(String x) {
//            return "";
//        }
//    }
//}