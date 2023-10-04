public class Vehicule {
    private String marque;
    private String modele;
    private int annee;
    private int kilometrage;
    private int prix;

    public Vehicule(String marque, String modele, int annee, int kilometrage, int prix) {
        this.marque = marque;
        this.modele = modele;
        this.annee = annee;
        this.kilometrage = kilometrage;
        this.prix = prix;
    }

    public Vehicule() {
        this.marque = "Audi";
        this.modele = "A4";
        this.annee = 2021;
        this.kilometrage = 0;
        this.prix = 50000;
    }

    public String getMarque() {
        return this.marque;
    }

    public String getModele() {
        return this.modele;
    }

    public int getAnnee() {
        return this.annee;
    }

    public int getKilometrage() {
        return this.kilometrage;
    }

    public int getPrix() {
        return this.prix;
    }

    public String avancer() {
        return "Vroum vroum";
    }
}