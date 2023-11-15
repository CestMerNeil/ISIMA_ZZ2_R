import java.io.*;

class Read_File {
    public static void main(String[] args) {
        File file = new File("Exception_TEST.xml");
        try (
            FileInputStream fis = new FileInputStream(file);
            InputStreamReader isr = new InputStreamReader(fis);
            BufferedReader br = new BufferedReader(isr);
        ) {
            String ligne = br.readLine();
            while (ligne != null) {
                System.out.println(ligne);
                ligne = br.readLine();
            }
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}