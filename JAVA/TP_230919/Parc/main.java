public class main{
    public static void main(String[] args){
        Voiture v = new Voiture("AA-000-Voi", 0, 5);
        Camion c = new Camion("AA-000-Cam", 0.0);
        System.out.println(v.afficher());
        System.out.println(c.afficher());
    }
}