public class Passage {
    static void methode1(int i) {
        i = 3;
    }

    static void methode2(int[] tab) {
        tab[4] = 7;
    }

    static void methode3(int[] tab) {
        tab = new int[10];
        tab[4] = 9;
    }

    static void methode4(AE a) {
        a = new AE(2);
    }

    static void methode5(AE c) {
        a.setValeur(3);
    }

    static AE methode(AE b) {
        b = new AE(4);
        return b;
    }

    public static void main(String[] args) {
        int i = 5;
        int[] tab = new int[10];
        methode1(i);
        System.out.println(i);
        methode2(tab);
        System.out.println(tab[4]);
        methode3(tab);
        System.out.println(tab[4]);
    }
}