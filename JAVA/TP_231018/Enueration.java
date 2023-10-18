class Enueration {
    public static void main(String[] args) {
        enum Semaine {LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE};

        for (Semaine s : Semaine.values()) {
            System.out.println(s);
        }
    }
} 