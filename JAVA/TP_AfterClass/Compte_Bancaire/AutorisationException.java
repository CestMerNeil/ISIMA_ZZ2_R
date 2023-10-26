public class AutorisationException extends Exception {
    public AutorisationException() {
        super("Vous ne pouvez pas retirer un montant supérieur à votre découvert autorisé");
    }
}