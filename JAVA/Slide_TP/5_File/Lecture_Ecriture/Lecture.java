import java.io.*;

class Lecture {
    
    public static void main(String[] args) {
        File file = new File("Example.txt");
        try (
            FileInputStream fis = new FileInputStream(file);
            InputStreamReader isr = new InputStreamReader(fis);
            BufferedReader br = new BufferedReader(isr);
        ) {
            String ligne = br.readLine();
            while (ligne != null) { // Read the file line by line
                System.out.println(ligne);
                ligne = br.readLine();
            }

            fis.close();
            isr.close();
            br.close();

        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}