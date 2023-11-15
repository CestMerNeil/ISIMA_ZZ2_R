public class Plusieurs_Blocs_Catch {
    public static void main(String[] args) {
        System.out.println("Bienvenue sur la fonction DIVISION!");
        System.out.println("Veuillez entrer un nombre entier: ");
        int a = Integer.parseInt(System.console().readLine());
        int b = Integer.parseInt(System.console().readLine());
        try {
            System.out.println("Le resultat de la division est: " + a/b);
        } catch (ArithmeticException e) {
            System.out.println("Erreur: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("Erreur: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Erreur: " + e.getMessage());
        } finally {
            System.out.println("Merci d'avoir utilise la fonction DIVISION!");
        }
    }
}