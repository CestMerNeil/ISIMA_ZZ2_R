class TestException {
    public static void main(String[] args) {
        System.out.println("Bienvenue sur la fonction DIVISION!");
        System.out.println("Veuillez entrer un nombre entier: ");
        int a = Integer.parseInt(System.console().readLine());
        int b = Integer.parseInt(System.console().readLine());
        try {
            if (b == 0) {
                throw new InvalidInputException("Le diviseur ne peut pas etre 0!");
            }
        } catch (InvalidInputException e) {
            System.out.println("Erreur: " + e.getMessage());
        } finally {
            System.out.println("Merci d'avoir utilise la fonction DIVISION!");
        }
    }
}