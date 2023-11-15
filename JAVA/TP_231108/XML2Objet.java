import java.io.*;
import java.beans.*;

public class XML2Objet {
    public static void main(String[] args) {
        File fic = new File("Person.xml");
        try (
                FileInputStream fis = new FileInputStream(fic);
                XMLDecoder xmlDecoder = new XMLDecoder(fis)
        ) {
            Person p1 = (Person) xmlDecoder.readObject();
            Person p2 = (Person) xmlDecoder.readObject();
            System.out.println(p1.getLastName() + " " + p1.getFirstName());
            System.out.println(p2.getAddress());
        } catch (IOException e) {
            System.out.println("Erreur d'entrée/sortie: " + e.getMessage());
        }
    }
}