import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class Lambda {

    public static void main(String[] args) {
        List<String> strings = Arrays.asList("Lambda", "Stream", "Java", "AAAAAAAAA", "A");
        strings.sort((s1, s2) -> s1.length() - s2.length());
        System.out.println(strings);

        List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5);
        List<Integer> evenNumbers = numbers.stream()
            .filter(n -> n % 2 == 0)
            .collect(Collectors.toList()); 

        System.out.println(evenNumbers);
    }
}