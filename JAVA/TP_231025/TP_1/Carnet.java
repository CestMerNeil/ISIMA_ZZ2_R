import java.util.ArrayList;

public class Carnet {
    ArrayList<Personne> personnes;

    public Carnet() {
        this.personnes = new ArrayList<Personne>();
    }

    public void ajouter(Personne p) {
        this.personnes.add(p);
    }

    public void supprimer(Personne p) {
        this.personnes.remove(p);
    }

    public Personne chercher(String nom) {
        for (Personne p : this.personnes) {
            if (p.nom.equals(nom)) {
                return p;
            }
        }
        return null;
    }
}