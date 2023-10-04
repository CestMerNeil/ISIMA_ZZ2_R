public class CompteBancaire {
    double solde = 0.0;
    double decouvert = -700.;

    public void retrait(double montant) throws IllegalArgumentException {
        if (montant < 0) {
            throw new IllegalArgumentException("Montant négatif");
        }
        if (solde - montant < decouvert) {
            throw new IllegalArgumentException("Solde insuffisant");
        }
        solde -= montant;
    }
}