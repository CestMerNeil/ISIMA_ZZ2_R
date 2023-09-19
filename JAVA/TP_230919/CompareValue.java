public class CompareValue {
    public static void main(String[] argv)
    {
        String s1 = "loic";
        String s2 = "loic";
        String s3 = new String("loic");
        String s4 = new String("loic");
        String s5 = s3;
        String s6 = null;

        System.out.println(s1==s2);
        System.out.println(s1==s3);
        System.out.println(s3==s4);
        System.out.println(s5==s3);

        System.out.println(s1.equals(s3));
        System.out.println(s1.equals(s6));
        //System.out.println(s6.equals(s1));

        System.out.println("==============================");

        String[] tab = {"hello","test", "yon", "loic"};
        System.out.println(tab.length);
    }
}