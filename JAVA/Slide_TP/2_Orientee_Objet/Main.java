class Main {
    public static void main(String[] args) {
        /*
        Voiture v = new Voiture("Peugeot", "308SW", 2023);
        System.out.println(v);
        System.out.println(v.demarrer());

        v.setModele("308");
        System.out.println(v);
        System.out.println(v.demarrer());
        */

        Vehicule v[] = new Vehicule[3];
        v[0] = new Voiture("Peugeot", "308SW", 2023);
        v[1] = new Vehicule("Porsche", "911", 2021);
        v[2] = new Voiture("Renault", "Clio", 2020);

        for(int i=0;i<v.length;i++) {
            System.out.println(v[i]);
            System.out.println(v[i].faireDuBruit());
            if(v[i].getClass().getName().equals("Voiture")) {
                ((Voiture)v[i]).conduire();
            }
        }
    }
}