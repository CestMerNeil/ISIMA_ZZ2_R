public class Camion {
    private String immat;
    private double capacite;

    public Camion(String immat, double capacite){
        this.immat = immat;
        this.capacite = capacite;
    }
    
    public Camion(){
        this("AA-000-AA", 0.0);
    }

    public String getImmat(){
        return this.immat;
    }

    public double getCapacite(){
        return this.capacite;
    }

    public void setImmat(String immat){
        this.immat = immat;
    }

    public void setCapacite(double capacite){
        this.capacite = capacite;
    }

    public String afficher(){
        return "Immatriculation : " + this.immat + "\nCapacité : " + this.capacite;
    }

    public void avancer(double n){
    }
}