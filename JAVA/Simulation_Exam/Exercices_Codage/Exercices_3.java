/*
1. Écrivez un programme qui utilise des generics pour implémenter une structure de données simple, par exemple une paire ou un tuple.
2. Utilisez la réflexion pour inspecter une classe et afficher tous ses méthodes et attributs, y compris ceux hérités de ses superclasses.
3. Écrivez un exemple de méthode qui utilise l'opérateur ternaire pour retourner le maximum de deux nombres.
4. Implémentez une méthode utilisant des streams pour filtrer et transformer une liste de nombres, par exemple en trouvant tous les nombres pairs et en les multipliant par deux.
*/

/* **************************************************************** */
/* Exercice 3 */
/* **************************************************************** */
/* Écrivez un exemple de méthode qui utilise l'opérateur ternaire pour retourner le maximum de deux nombres. */
/* **************************************************************** */

public class Exercices_3 {

    public static int max(int num1, int num2) {
        return num1 > num2 ? num1 : num2;
    }

    public static void main(String[] args) {
        int a = 10;
        int b = 20;

        System.out.println(max(a, b));
    }
}