// Date: 2021/7/31
// Name: Hello World
// Author: Ao XIE
// Purpose: Créez un programme qui demande à l'utilisateur d'entrer deux nombres, puis effectuez et affichez l'addition, la soustraction, la multiplication et la division de ces nombres.

class Calculatrice_Simple {
    public static void main(String[] args) {
        System.out.println("Bienvenue dans la calculatrice simple!");
        System.out.println("Veuillez entrer deux nombres:");
        Float a = Float.parseFloat(System.console().readLine());
        Float b = Float.parseFloat(System.console().readLine());

        Float somme = a + b;
        Float difference = a - b;
        Float produit = a * b;
        Float quotient = a / b;

        System.out.println("La somme de " + a + " et " + b + " est: " + somme);
        System.out.println("La différence de " + a + " et " + b + " est: " + difference);
        System.out.println("Le produit de " + a + " et " + b + " est: " + produit);
        System.out.println("Le quotient de " + a + " et " + b + " est: " + quotient);
    }
}