public class VisualJava {
    public int value_public; // Il est visible par tout.
    int value_package; // Il est visible sur la package.
    private int value_private; // Il est visivle sur que cet classe.

    private String nom;

    public String getNom(){
        return nom;
    }

    public void setNom(String Nom){
        nom = Nom;
    }


    public static void main(String[] argv){
        VisualJava v = new VisualJava();
        v.setNom("Loic YON");
        System.out.println("Nom: " + v.getNom());
        System.out.println("Nom: " + v.nom); // Il est possible car on est toujour dans la classe VisualJava.
    }
}