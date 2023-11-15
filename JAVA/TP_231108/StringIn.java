import java.io.*;

public class StringIn {
    /*
    public static void main(String[] args) throws IOException {
        File fic = new File("StringOut.txt");
        FileInputStream fis = new FileInputStream(fic);
        InputStreamReader isr = new InputStreamReader(fis);
        BufferedReader br = new BufferedReader(isr);

        String ligne = br.readLine();
        System.out.println(ligne);
        br.close();
        isr.close();
        fis.close();
    }
    */

    // Try with resources
    public static void main(String[] args) {
        File fic = new File("StringOut.txt");
        try (
                FileInputStream fis = new FileInputStream(fic);
                InputStreamReader isr = new InputStreamReader(fis);
                BufferedReader br = new BufferedReader(isr)
        ) {
            String ligne = br.readLine();
            while (ligne != null) { // Read the file line by line
                System.out.println(ligne);
                ligne = br.readLine();
            }
        } catch (IOException e) {
            System.out.println("Erreur d'entrée/sortie: " + e.getMessage());
        }
    }

}