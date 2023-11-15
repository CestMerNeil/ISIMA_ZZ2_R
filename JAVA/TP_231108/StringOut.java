import java.io.*;

public class StringOut {
    public static void main(String[] args) throws IOException {
        File fic = new File("StringOut.txt");
        FileOutputStream fos = new FileOutputStream(fic);
        PrintStream ps = new PrintStream(fos);

        ps.println("Bonjour");
        ps.close();
        fos.close();
    }
}