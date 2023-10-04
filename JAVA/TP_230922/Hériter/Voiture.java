public class Voiture extends Vehicule {
    public Voiture(String marque, String modele, int annee, int kilometrage, int prix) {
        super(marque, modele, annee, kilometrage, prix);
    }

    public Voiture() {
        super();
    }

    public String avancer(){
        return "Voiture";
    }
}