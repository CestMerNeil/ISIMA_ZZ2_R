___
# **Question du Cours**
___

## 1. Expliquer ce qu'est un Objet en Java.

___Décrivez le concept d'objet dans le contexte de la programmeation orientée objet en Java___

> En Java, un ```Object``` est une instance d'une classe.
> Pour comprendre ce qu'est un objet, il est important de se familliariser avec le concept de classe et d'instance dans la programmation orientée objet(POO).

## 2. Expliquer le Mécanisme de Gestion des Exception en Java.

___Discutez des différentes clés utilisées dans la gestion des exceptions en Java(try, catch, finally, throw, throws)___

> Le mécanisme de gestion des exceptions en Java est un moyen puissant et flexible de gérer les erreurs et les conditions anormales qui suiviennent pendant l'exécution d'un programme.

* ___try :___ Utilisé pour encadrer le code qui pourrait lancer une exception.
* ___catch :___ Permet de gérer l'exception lancée dans le bloc 'try'.
* ___finally :___ Bloc de code qui s'exécute toujours, que des exceptions soient lancées ou non.
* ___throw :___ Utilisé pour lancer explicitement une exception.
* ___thorws :___ Indique qu'une méthode peut lancer une exception, laissent la gestion de cette exception à l'appelant de la méthode.

## 3. Classes Abstraites et Interfaces.

___Expliquez ce que sont les classes abstraites et les interfaces en Java et comment elles sont utilisées___

> ___Classes Abstraites :___ C'est pour fournir une base commune avec une implémentation partielle.
> 
> ___Interfaces :___ Une interfaces est un type de référence qui est complètement abstraite. Elle est utilisé pour définir un contrat que les classes implémentant l'interface doivent suivre. C'est un contrat pour les classes.

## 4. Surcharge vs Redéfinition.
___Décrivez la différence entre la surcharge(overloading) et la redéfinition(overriding) des méthodes___

* ___Surcharge :___ ```Overload``` en anglais, c'est-à-dire que c'est possible d'avoir plusieurs méthodes qui ont le même nom, mais different paramètres.
* ___Redéfition :___ ```Override``` en anglais, dans la situation héritage, la classe enfant peut modifier le comportement d'une méthode de classe parent.

```java
// Surcharge
public class Surcharge {
    public int methode(int i) {
        return i;
    }

    // Overload
    public String methode(String str) {
        return str;
    }
}

// Redéfinition
public class Redefinition {
    public void methode() {
        System.out.println("Méthode de la classe Redéfinition.");
    }
}

public class SousRedefinition extends Redefinition {
    @Override
    public void methode() {
        System.out.println("Méthode de la classe SousRedéfintion.");
    }
}
```

