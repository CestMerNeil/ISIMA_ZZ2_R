public class main {
    public static void main(String[] args) {
        Vehicule v = new Voiture("Benz", "C-Class", 2023, 100, 500000);
        System.out.println(v.avancer());

        Camion c = new Camion("Volvo", "FH", 2023, 100, 500000);
        System.out.println(c.avancer());
    }
}