public class Camion extends Vehicule {
    public Camion(String marque, String modele, int annee, int kilometrage, int prix) {
        super(marque, modele, annee, kilometrage, prix);
    }

    public Camion() {
        super();
    }

    public String avancer(){
        return "Camion";
    }
}