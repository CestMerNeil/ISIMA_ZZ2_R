public class Voiture{
    private String immat;
    private int couleur;
    private int places;

    public Voiture(String immat, int couleur, int places){
        this.immat = immat;
        this.couleur = couleur;
        this.places = places;
    }

    public Voiture(){
        this("AA-000-AA", 0, 5);
    }

    public String getImmat(){
        return this.immat;
    }

    public int getCouleur(){
        return this.couleur;
    }

    public int getPlaces(){
        return this.places;
    }

    public void setImmat(String immat){
        this.immat = immat;
    }

    public void setPlaces(int places){
        this.places = places;
    }

    public void setCouleur(int couleur){
        this.couleur = couleur;
    }

    public String afficher(){
        return "Immatriculation : " + this.immat + "\nCouleur : " + this.couleur + "\nNombre de places : " + this.places;
    }

    public void avancer(int n){
        places += n;
    }
}