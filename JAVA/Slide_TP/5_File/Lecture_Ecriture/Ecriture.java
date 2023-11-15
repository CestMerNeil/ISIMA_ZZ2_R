import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class Ecriture {

    public static void main(String[] args) {
        File file = new File("Example.txt");
        try {
            FileWriter writer = new FileWriter(file);
            writer.write("Exercices : Lecture et écriture de fichiers texte");

            writer.close();
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}