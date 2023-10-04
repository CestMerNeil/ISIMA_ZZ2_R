public class Vehiclue {

    private String immatriculation;

    public Vehiclue(String immatriculation) {
        this.immatriculation = immatriculation;
    }

    public String getImmatriculation() {
        return immatriculation;
    }

    public void setImmatriculation(String immatriculation) {
        this.immatriculation = immatriculation;
    }

    public void avancer() {
        System.out.println("Vehiclue avance");
    }
}