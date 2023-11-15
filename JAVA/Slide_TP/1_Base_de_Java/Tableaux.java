// Écrivez un programme qui crée un tableau d'entiers, le remplit avec des nombres aléatoires, puis affiche ces nombres.

import java.util.Random;

class Tableaux {
    public static void main(String[] args) {
        System.out.println("Bienvenue dans les tableaux!");
        System.out.println("Entrez la taille du tableau:");
        int taille = Integer.parseInt(System.console().readLine());
        int[] tab = new int[taille];
        for(int i=0; i<taille; i++) {
            Random rand = new Random();
            tab[i] = rand.nextInt(100);
            System.out.println("Le " + i+ "eme nombre est " + tab[i]);
        }
    }
}