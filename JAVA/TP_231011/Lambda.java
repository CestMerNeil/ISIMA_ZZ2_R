class Lambda {
    // Functional interface
    @FunctionalInterface
    interface MyInterface {
        public void sayHello();
    }

    // TEST
    @FunctionalInterface
    public interface Pokemon {
        public void printName();
    }

    @FunctionalInterface
    public interface Pokemon2 {
        public void printName2(String name);
    }

    public static void main(String[] args) {
        // Lambda expression
        MyInterface myInterface = () -> System.out.println("Hello World");
        myInterface.sayHello();

        // TEST
        Pokemon pokemon = () -> System.out.println("Pikachu");
        pokemon.printName();

        Pokemon2 pokemon2 = (String name) -> System.out.println(name);
        pokemon2.printName2("Rondudu");
    }

    
}