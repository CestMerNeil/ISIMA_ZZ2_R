public class ExampleClass {
    
    private String privateField;
    public int publicField;

    public ExampleClass() {
        this.privateField = "privateField";
        this.publicField = 123;
    }

    public void publicMethod() {
        System.out.println("publicMethod");
    }

    private void privateMethod() {
        System.out.println("privateMethod");
    }

}