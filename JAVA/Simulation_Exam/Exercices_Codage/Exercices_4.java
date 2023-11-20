/*
1. Écrivez un programme qui utilise des generics pour implémenter une structure de données simple, par exemple une paire ou un tuple.
2. Utilisez la réflexion pour inspecter une classe et afficher tous ses méthodes et attributs, y compris ceux hérités de ses superclasses.
3. Écrivez un exemple de méthode qui utilise l'opérateur ternaire pour retourner le maximum de deux nombres.
4. Implémentez une méthode utilisant des streams pour filtrer et transformer une liste de nombres, par exemple en trouvant tous les nombres pairs et en les multipliant par deux.
*/

/* **************************************************************** */
/* Exercice 4 */
/* **************************************************************** */
/* 
    Implémentez une méthode utilisant des streams pour filtrer et 
    transformer une liste de nombres, par exemple en trouvant tous 
    les nombres pairs et en les multipliant par deux. 
*/
/* **************************************************************** */

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class Exercices_4 {
    public static void main(String[] args) {
        List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5, 6, 10);
        List<Integer> num = numbers.stream()
        .filter(n -> n % 2 == 0)
        .map(n -> n * 2)
        .collect(Collectors.toList());
        System.out.println(num);
    }
}