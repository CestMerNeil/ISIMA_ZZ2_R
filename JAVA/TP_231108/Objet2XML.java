import java.io.*;
import java.beans.*;

public class Objet2XML {
    public static void main(String[] args) {
        File fic = new File("Person.xml");
        try (
                FileOutputStream fos = new FileOutputStream(fic);
                XMLEncoder xmlEncoder = new XMLEncoder(fos)
        ) {
            Person p1 = new Person("Doe", "John", 42, "1 rue de la Paix", "0102030405", "Doe.John@gmail.com");
            Person p2 = new Person("Doe", "Jane", 42, "1 rue de la Paix", "0102030405", "Doe.Jane@gmail.com");
            xmlEncoder.writeObject(p1);
            xmlEncoder.writeObject(p2);
            xmlEncoder.flush();
        } catch (IOException e) {
            System.out.println("Erreur d'entrée/sortie: " + e.getMessage());
        }
    }
}