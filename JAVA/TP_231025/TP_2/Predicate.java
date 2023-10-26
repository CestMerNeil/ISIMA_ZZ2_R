public class Predicate {


    stream.filter(new Predicate<Integer>() {
        @Override
        public boolean test(Integer i) {
            return Integer.valueOf(i) % 2 == 0;
        }
    });


}