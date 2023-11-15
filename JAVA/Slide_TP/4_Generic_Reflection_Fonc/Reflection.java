import java.lang.reflect.Method;
import java.lang.reflect.Field;

public class Reflection {

    public static void main(String[] args) {
        Class<ExampleClass> clazz = ExampleClass.class;

        System.out.println("--------------------");

        System.out.println("Public Methods:");
        Method[] methods_public = clazz.getMethods();
        for (Method method : methods_public) {
            System.out.println(method.getName());
        }

        System.out.println("--------------------");

        System.out.println("Public fields:");
        Field[] fields_public = clazz.getFields();
        for (Field field : fields_public) {
            System.out.println(field.getName());
        }

        System.out.println("--------------------");

        System.out.println("Private Methods:");
        Method[] methods = clazz.getDeclaredMethods();
        for (Method method : methods) {
            System.out.println(method.getName());
        }

        System.out.println("--------------------");

        System.out.println("Private fields:");
        Field[] fields = clazz.getDeclaredFields();
        for (Field field : fields) {
            System.out.println(field.getName());
        }

        System.out.println("--------------------");

    }
}