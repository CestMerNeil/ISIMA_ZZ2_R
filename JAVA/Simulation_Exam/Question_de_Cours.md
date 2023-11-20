### ___1. Expliquez le concept de polymorphisme en Java. Comment est-il implémenté ?___

*Polymorphisme, c'est-à-dire d'avoir different resultats dans la même fonction.
Afin d'obtenir le polymorphisme en Java, l'héritage et l'override sont nécessaires.*
```java
//  Polymorphisme Statique:
class Example {
    public void example(String str) {
        System.out.println("String");
    }
    public void example(int i) {
        System.out.println("Int");
    }
}

// Polymorphisme Dynamique:
class Mere {
    public void methode() {
        System.out.println("Methode de classe mere");
    }
}

class Example extends Mere {
    @override
    public void methode() {
        System.out.println("Methode de classe son.");
    }
}
```
___
### ___2. Décrivez le cycle de vie d'un thread en Java. Quels sont les états possibles d'un thread ?___

**New, Runnable, Blocked, Waiting, Timed_Waiting, Terminated.**

___Cycle de Vie:
    Création -> Exécutable -> En Exécution -> Bloqué/En Attente/Temps d'Attente Limité -> Exécutable -> Terminé___

___
### ___3. Qu'est-ce qu'une interface en Java ? Comment diffère-t-elle d'une classe abstraite ?___

> Une interface est un type de référence qui est complètement abstraite. Elle est utilisé pour définir un contrat que les classes implémentant l'interface doivent suivre.
> Une classe peut implémenter plusieurs interfaces, ce qui permet de contourner la limitation de l'héritage simple en Java.

> Les differences entre la classe abstraite et l'interfact
>> Si c'est un contrat pour les classes -> Interface
>> Si c'est pour fournir une base commune avec une implémentation partielle -> Classe Abstraite


___
### ___4. Expliquez comment fonctionnent les références faibles ('WeakReference') en Java et dans quel scénario elles sont utiles.___

    WeakReference<Car> weakCar = new WeakReference(Car)(car);
    Quand l'object est facile de constructer et va utiliser beaucoup de memoire, c'est le scénario d'utiliser.

___
### ___5. Qu'est-ce qu'un bloc static en Java ? Donnez un exemple d'utilisation.___
**Le code du bloc statique est exécuté lorsque la classe est chargée, est stocké dans la zone statique et peut être partafé par les threads.
Les blocs de code statique ne sont exécuté qu'une seule fois.**
```java
//Exemple d'Utilisation : 
public class StaticDemo {
    public static void main(String[] args) {
        Demo1.StaticMethod();
    }
}

class Demo1 {
    static {
        System.out.println("Demo1 static block.");
    }

    public static void StaticMethod() {
        System.out.println("Static Methode!");
    }
}
```

___
### ___6. Expliquez la différence entre 'String', 'StringBuilder', et 'StringBuffer' en Java.___

* Utiliez 'String' pour les textes immuables et simples.
  
* Utiliez 'StringBuilder' pour les chaînes de caractères modifiables dans un contexte monothread pour de meilleures performances.
  
* Utiliez 'StringBuffer' pour les chaînes de caractères modifiables dans un contexte multithread, même si cela peut entraîner un coût de performances supplémentaire.**

___
### ___7. Quels sont les avantages de l'utilisation des expressions lambda en Java ? Donnez un exemple.___

```java
//Exemple:

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class LambdaExample {
    public static void main(String[] args) {
        List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5, 6);

        // Utilisation d'une expression lambda avec la Stream API pour filtrer et transformer les données.
        List<Integer> evenNumbersSquared = numbers.stream()
        .filter(n -> n % 2 == 0)
        .map(n -> n * n)
        .collect(Collectors.toList());

        System.out.println(evenNumbersSquared);
    }
}
```
**Avantages:**
* Concision
* Lisibilité et Clarté
* Facilité d'utilisation avec les Collections
* Programmation Fonctionnelle
* Passage de Comportement
* Utilisation avec les Interfaces Fonctionnelles

___
### ___8. Comment fonctionne le garbage collector en Java ? Expliquez le processus de ramassage de déchets.___

___
### ___9. Quelle est la différence entre '==' et 'equals()' en Java ?___
* ```==``` est pour les comparaisions de références ou pour les types primitifs.
* ```equals()``` est pour comparer le contenu des objets.

___
### ___10. Expliquez le concept de "Reflection" en Java et donnez un exemple d'utilisation.___
"Reflection" est une fonctionnalité puissante qui permet à un programme d'inspecter ou de modifier à l'exécution le comportement
d'objets de n'importe quelle classe. En d'autres termes, la réflexion permet à un programme Java d'examiner ou de 'refléter' sur lui-même, et de manipuler les propriétés internes des classes, des méthodes, des interfaces, etc.

```java
//Exemple:
import java.lang.reflect.Method;

public class ReflectionExample {
    public static void main(String[] args) {
        try {
            Class<?> cls = Class.forName("java.lang.String");
            Method[] methods = cls.getMethods();
            System.out.println("Méthodes de la classe String : ");
            for(Method method : methods) {
                System.out.println(method.getName());
            }
        } catch (ClassNotFoundException e) {
            e.printStacktrace();
        }
    }
}
```

___
### ___11. Qu'est-ce qu'une annotation en Java ? Donnez un exemple où les annotations sont couramment utilisées.___

___
### ___12. Comment fonctionne la sérialisation en Java ? Quel est l'intérêt de l'interface 'Serializable' ?___