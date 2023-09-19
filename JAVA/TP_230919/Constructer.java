public class Constructer {
    private int nbEtudiant;
    private boolean passionnant;
    static private int nbConstructer = 0; // 

    public void setNbEtudiant(int n){
        nbEtudiant = n;
    }

    public void setPassionnant(boolean b){
        passionnant = b;
    }

    public Constructer(){
        this(0, true);
    }

    public Constructer(int n, boolean b){
        setNbEtudiant(n);
        setPassionnant(b);
        nbConstructer++;
    }

    static public int getNbConstructer(){
        return nbConstructer;
    }
    // Quand meme, on a le droit de acce la variable static avec une fonction non-static.
    // Mais on ne peut pas acce la variable non-static avec une fonction static.

    public static void main(String[] argv){
        Constructer c1 = new Constructer();
        System.out.println(Constructer.getNbConstructer());
        Constructer c2 = new Constructer(12, true);
        System.out.println(Constructer.getNbConstructer());

        System.out.println(c2.toString());
        System.out.println(c2);
        
    }
}