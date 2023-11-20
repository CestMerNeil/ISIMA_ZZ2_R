public class Equal {
    public static void main(String[] args) {
        String s1 = "bleu";
        String s2 = "bleu";
        String s3 = new String("bleu");
        String s4 = new String("bleu");
        String s5 = null;
        String s6 = s4;
        String s7 = "";

        System.out.println("s1 == s2 : " + (s1 == s2));
        System.out.println("s6 == s4 : " + (s6 == s4));
        System.out.println("s3 == s4 : " + (s3 == s4));
        System.out.println("s1 == s3 : " + (s1 == s3));

        s7.concat(s3);

        System.out.println(s1.equals(s3));
        System.out.println(s7.equals(s2));
        //System.out.println(s5.equals(s1));
        System.out.println(s1.equals(s6));
    }
} 