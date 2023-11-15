class Voiture extends Vehicule implements Conductible {
    //private String marque;
    //private String modele;
    //private int annee;

    public Voiture(String marque, String modele, int annee) {
        super(marque, modele, annee);
        //this.marque = marque;
        //this.modele = modele;
        //this.annee = annee;
    }

    @Override
    public String toString() {
        return "Voiture " + super.getMarque() + " " + super.getModele() + " de " + super.getAnnee();
    }

    @Override
    public String demarrer() {
        return "Voiture Vroum vroum";
    }

    @Override
    public String faireDuBruit() {
        return "Voiture Bruit de vehicule ~";
    }

    @Override
    public void conduire() {
        System.out.println("La voiture est en train de conduire.");
    }
}