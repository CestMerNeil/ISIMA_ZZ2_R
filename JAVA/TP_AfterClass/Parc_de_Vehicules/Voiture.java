public class Voiture {
    private String marque;
    private String modele;
    private int nbPortes;

    public Voiture(String marque, String modele, int nbPortes) {
        this.marque = marque;
        this.modele = modele;
        this.nbPortes = nbPortes;
    }

    public Voiture() {
        this("null", "null", 0);
    }

    public void demarrer() {
        System.out.println("La voiture démarre");
    }
}