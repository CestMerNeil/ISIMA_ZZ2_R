import java.io.*;
import java.beans.*;

class Write_File {
    public static void main(String[] args) {
        File exception_test = new File("Exception_TEST.xml");
        try (
            FileOutputStream fos = new FileOutputStream(exception_test);
            PrintStream ps = new PrintStream(fos);
        ) {
            ps.println("Hello World");
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }

    }
}