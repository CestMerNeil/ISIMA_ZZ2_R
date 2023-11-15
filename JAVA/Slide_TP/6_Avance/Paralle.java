import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

class Paralle {
    public static void main(String[] args) {
        ExecutorService es = Executors.newFixedThreadPool(2);

        Runnable r1 = () -> System.out.println("Task1");
        Runnable r2 = () -> System.out.println("Task2");

        es.submit(r1);
        es.submit(r2);

        es.shutdown();
    }
}