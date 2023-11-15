// Date: 2021/7/31
// Name: Hello World
// Author: Ao XIE
// Purpose:
//  Écrivez un programme qui lit un nombre entier et affiche si ce nombre est pair ou impair.
//  Créez un programme qui utilise une boucle pour afficher les nombres de 1 à 10.

class Controles_de_Flux {

    public static String ifPair(int n) {
        String res = "Il est en Pair";
        if(n%2 != 0) res = "Il est en Impair";
        return res;
    }

    public static void boucleFor(int n) {
        for(int i=0; i<n; i++) {
            System.out.println(i);
        }
    }

    public static void main(String[] args) {
        System.out.println("Bienvenue dans les contrôles de flux!");
        System.out.println("Entrez 1 pour tester la fonction ifPair");
        System.out.println("Entrez 2 pour tester la boucle for");
        int choix = Integer.parseInt(System.console().readLine());
        if(choix == 1) {
            System.out.println("Entrez un nombre entier:");
            int n = Integer.parseInt(System.console().readLine());
            System.out.println(ifPair(n));
        } else if(choix == 2) {
            System.out.println("Entrez un nombre entier:");
            int n = Integer.parseInt(System.console().readLine());
            boucleFor(n);
        } else {
            System.out.println("Choix invalide!");
        }
    }
}
