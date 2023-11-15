import java.io.File;
import java.io.FilenameFilter;

public class Filter {

    public static void main(String[] args) {
        // Remplacez ceci par le chemin du répertoire que vous voulez lire
        String directoryPath = "/";

        File directory = new File(directoryPath);

        // Vérifiez si le chemin est un répertoire
        if (directory.exists() && directory.isDirectory()) {
            // Utilisez un filtre de nom de fichier pour sélectionner les fichiers .txt
            FilenameFilter txtFileFilter = new FilenameFilter() {
                @Override
                public boolean accept(File dir, String name) {
                    return name.endsWith(".txt");
                }
            };

            // Liste des fichiers .txt
            File[] txtFiles = directory.listFiles(txtFileFilter);

            for (File txtFile : txtFiles) {
                System.out.println(txtFile.getName());
            }
        } else {
            System.out.println(directoryPath + " n'est pas un répertoire ou n'existe pas.");
        }
    }
}
