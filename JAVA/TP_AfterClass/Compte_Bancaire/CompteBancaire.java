import java.lang.Exception;

public class CompteBancaire {
    private double solde = 0.0;
    private double decouvertAutorise = -700.;
    private double plafondAutorise = 1000.0;

    // Constructeur
    public CompteBancaire(double solde, double decouvertAutorise) {
        this.solde = solde;
        this.decouvertAutorise = decouvertAutorise;
    }

    public CompteBancaire(double solde) {
        this.solde = solde;
    }

    // Getter
    public double getSolde() { return solde; }

    public double getDecouvertAutorise() { return decouvertAutorise; }

    // Setter
    public void setSolde(double solde) { this.solde = solde; }

    public void setDecouvertAutorise(double decouvertAutorise) { this.decouvertAutorise = decouvertAutorise; }

    // Fonction de retrait
    public void retrait(double montant) throws IllegalArgumentException, AutorisationException {
        double nouveauSolde = solde - montant;
        if (montant < 0.0) {
            //System.out.println("Vous ne pouvez pas retirer un montant négatif");
            throw new IllegalArgumentException("Vous ne pouvez pas retirer un montant négatif");
        }
        if (nouveauSolde < decouvertAutorise) {
            //System.out.println("Vous ne pouvez pas retirer un montant supérieur à votre découvert autorisé");
            throw new AutorisationException();
        }
        solde = nouveauSolde;
    }

    // Fonction de dépôt
    public void depot(double montant) {
        if (montant < 0.0) {
            System.out.println("Vous ne pouvez pas déposer un montant négatif");
        }
        else { solde += montant; }
    }

    // Fonction Main
    //==================================================================================================================
    
    public static void main(String[] args) {
        CompteBancaire compte1 = new CompteBancaire(-700, -700.0);
        CompteBancaire compte2 = new CompteBancaire(1000.0);
        try {
            compte1.retrait(100.0);
            compte1.retrait(1000.0);
            compte1.retrait(-100.0);
        }
        catch (AutorisationException e) {
            System.out.println("Vous ne pouvez pas retirer un montant supérieur à votre découvert autorisé");
        }
        catch (IllegalArgumentException e) {
            System.out.println("Vous ne pouvez pas retirer un montant négatif");
        }
        System.out.println("Solde du compte 1 : " + compte1.getSolde());
        try {
            compte2.retrait(100.0);
            compte2.retrait(1000.0);
            compte2.retrait(-100.0);
        }
        catch (AutorisationException e) {
            System.out.println("Vous ne pouvez pas retirer un montant supérieur à votre découvert autorisé");
        }
        catch (IllegalArgumentException e) {
            System.out.println("Vous ne pouvez pas retirer un montant négatif");
        }
        System.out.println("Solde du compte 2 : " + compte2.getSolde());
    }
    /*

    public static void main(String[] args) {
        CompteBancaire compte1 = new CompteBancaire(1000.0, -700.0);
        CompteBancaire compte2 = new CompteBancaire(1000.0);

        // 封装测试用例
        TestScenario[] testScenarios = {
            new TestScenario("Retrait d'un montant valide", compte1, 100.0, null),
            new TestScenario("Retrait d'un montant supérieur au solde autorisé", compte1, 2000.0, AutorisationException.class),
            new TestScenario("Retrait d'un montant négatif", compte1, -100.0, IllegalArgumentException.class),
            new TestScenario("Dépôt d'un montant valide", compte1, 200.0, null),
            new TestScenario("Dépôt d'un montant négatif", compte1, -50.0, IllegalArgumentException.class)
        };

        for (TestScenario scenario : testScenarios) {
            try {
                scenario.execute();
                System.out.println(scenario.getDescription() + " : Réussi");
            } catch (Exception e) {
                System.out.println(scenario.getDescription() + " : Échoué, Erreur : " + e.getMessage());
            }
        }

        System.out.println("Solde du compte 1 : " + compte1.getSolde());
        System.out.println("Solde du compte 2 : " + compte2.getSolde());
    }

    static class TestScenario {
        private String description;
        private CompteBancaire compte;
        private double montant;
        private Class<? extends Exception> expectedException;

        public TestScenario(String description, CompteBancaire compte, double montant, Class<? extends Exception> expectedException) {
            this.description = description;
            this.compte = compte;
            this.montant = montant;
            this.expectedException = expectedException;
        }

        public void execute() throws Exception {
            if (expectedException == null) {
                if (montant < 0) {
                    throw new IllegalArgumentException("Vous ne pouvez pas déposer/retirer un montant négatif");
                } else if (montant >= 0) {
                    if (description.contains("Dépôt")) {
                        compte.depot(montant);
                    } else if (description.contains("Retrait")) {
                        compte.retrait(montant);
                    }
                }
            } else {
                try {
                    if (description.contains("Dépôt")) {
                        compte.depot(montant);
                    } else if (description.contains("Retrait")) {
                        compte.retrait(montant);
                    }
                    throw new AssertionError("L'opération devrait échouer mais elle a réussi.");
                } catch (Exception e) {
                    if (!expectedException.isInstance(e)) {
                        throw e;
                    }
                }
            }
        }

        public String getDescription() {
            return description;
        }
    }
    */


}