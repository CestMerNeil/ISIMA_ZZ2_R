import java.io.File;
import java.io.FilenameFilter;

class Parcours {

    public static void main(String[] args) {
        
        String directoryPath = "/Users/neil/Library/Developer";

        File directory = new File(directoryPath);
        if (directory.exists() && directory.isDirectory()) {
            listFileRecursive(directory);
        } else {
            System.out.println(directoryPath + " n'est pas un répertoire ou n'existe pas.");
        }
    }

    public static void listFileRecursive(File dir) {
        File[] files = dir.listFiles();

        if (files != null) {
            for(File file : files) {
                if (file.isDirectory()) {
                    listFileRecursive(file);
                } else {
                    System.out.println(file.getAbsolutePath());
                }
            }
        }
    }
}