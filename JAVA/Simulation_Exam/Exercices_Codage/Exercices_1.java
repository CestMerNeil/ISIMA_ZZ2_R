/*
1. Écrivez un programme qui utilise des generics pour implémenter une structure de données simple, par exemple une paire ou un tuple.
2. Utilisez la réflexion pour inspecter une classe et afficher tous ses méthodes et attributs, y compris ceux hérités de ses superclasses.
3. Écrivez un exemple de méthode qui utilise l'opérateur ternaire pour retourner le maximum de deux nombres.
4. Implémentez une méthode utilisant des streams pour filtrer et transformer une liste de nombres, par exemple en trouvant tous les nombres pairs et en les multipliant par deux.
*/

/* **************************************************************** */
/* Exercice 1 */
/* **************************************************************** */
/* Ecrivez un programme qui utilise des generics pour implémenter une structure de données simple, par exemple une paire ou un tuple. */
/* **************************************************************** */

public class Exercices_1<T, U> {
    private T first;
    private U second;

    public Exercices_1(T first, U second) {
        this.first = first;
        this.second = second;
    }

    public T getFirst() { return first; }
    public U getSecond() { return second; }

    public void setFirst(T newValue) { first = newValue; }
    public void setSecond(U newValue) { second = newValue; }

    @Override
    public String toString() {
        return "(" + first + ", " + second + ")";
    }

    public static void main(String[] args) {
        Exercices_1<String, Integer> pair = new Exercices_1<>("Hello", 42);
        System.out.println(pair);
    }
}