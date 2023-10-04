public class Seaplane extends Vehiclue implements Flottant {
    public Seaplane(String immatriculation) {
        super(immatriculation);
    }

    public void flotter() {
        System.out.println("Seaplane flotte");
    }

    public void avancer() {
        System.out.println("Seaplane avance");
    }
}