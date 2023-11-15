// Date: 2021/7/31
// Name: Hello World
// Author: Ao XIE
// Purpose: Écrivez un programme qui prend une chaîne de caractères en entrée et retourne la même chaîne en majuscules et en minuscules.

class Manipulation_de_Chaines {
    public static void main(String[] args) {
        System.out.println("Bienvenue dans la manipulation de chaînes!");
        System.out.println("Entrez une chaîne de caractères:");
        String str = System.console().readLine();

        System.out.println("La chaîne en majuscules est:" + str.toUpperCase());
        System.out.println("La chaîne en miniscules est:" + str.toLowerCase());
    }
}