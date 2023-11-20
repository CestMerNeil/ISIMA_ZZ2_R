/*
1. Écrivez un programme qui utilise des generics pour implémenter une structure de données simple, par exemple une paire ou un tuple.
2. Utilisez la réflexion pour inspecter une classe et afficher tous ses méthodes et attributs, y compris ceux hérités de ses superclasses.
3. Écrivez un exemple de méthode qui utilise l'opérateur ternaire pour retourner le maximum de deux nombres.
4. Implémentez une méthode utilisant des streams pour filtrer et transformer une liste de nombres, par exemple en trouvant tous les nombres pairs et en les multipliant par deux.
*/

/* **************************************************************** */
/* Exercice 2                                                       */
/* **************************************************************** */
/* 
    Utilisez la réflexion pour inspecter une classe et afficher 
    tous ses méthodes et attributs, y compris ceux hérités de ses 
    superclasses. 
*/
/* **************************************************************** */

import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;

public class Exercices_2 {
    public static void main(String[] args) {
        try {
            Class<?> c = Class.forName("java.lang.String");
            System.out.println("Class: " + c.getName());
            System.out.println("Superclass: " + c.getSuperclass().getName());
            System.out.println("Modifiers: " + Modifier.toString(c.getModifiers()));
            System.out.println("Fields:");
            for (Field f : c.getDeclaredFields()) {
                System.out.println("  " + f.getName());
            }
            System.out.println("Methods:");
            for (Method m : c.getDeclaredMethods()) {
                System.out.println("  " + m.getName());
            }
        } catch (ClassNotFoundException e) {
            System.out.println("Class not found: " + e);
        }
    }
}