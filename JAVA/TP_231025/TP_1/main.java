import java.util.ArrayList;
import java.util.HashSet;

public class main {
    public static void main(String[] args) {
        Carnet c = new Carnet();
        c.ajouter(new Personne("Jean", "0123456789"));
        c.ajouter(new Personne("Paul", "0123456789"));
        c.ajouter(new Personne("Jacques", "0123456789"));
        c.ajouter(new Personne("Jean", "0123456789"));
        c.ajouter(new Personne("Jean", "0123456789"));
        
        System.out.println(c.chercher("Jean"));
        System.out.println(c.chercher("Paul"));
        System.out.println(c.chercher("Jacques"));
        System.out.println(c.chercher("Jean"));
        System.out.println(c.chercher("Jean"));

        //Carnet p1 = new Personne[50];
        Carnet p2 = new ArrayList<Personne>();
        Carnet p3 = new HashSet<String, Personne>();
        
    }
}