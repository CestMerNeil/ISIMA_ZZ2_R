class Vehicule {
    private String marque;
    private String modele;
    private int annee;

    public Vehicule(String marque, String modele, int annee) {
        this.marque = marque;
        this.modele = modele;
        this.annee = annee;
    }

    public String toString() {
        return "Vehicule " + this.marque + " " + this.modele + " de " + this.annee;
    }

    public String demarrer() {
        return "Vroum vroum";
    }

    public String faireDuBruit() {
        return "Bruit de vehicule ~";
    }

    // Getters
    public String getMarque() { return this.marque; }
    public String getModele() { return this.modele; }
    public int getAnnee() { return this.annee; }

    // Setters
    public void setMarque(String marque) { this.marque = marque; }
    public void setModele(String modele) { this.modele = modele; }
    public void setAnnee(int annee) { this.annee = annee; }
}