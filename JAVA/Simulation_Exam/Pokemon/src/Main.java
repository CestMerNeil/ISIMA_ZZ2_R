public class Main {
    public static void main(String[] args) {
        User user1 = new User("Ash");
        user1.addPokemon(new FirePokemon("Charmander", 100, 20, 5));
        user1.addPokemon(new FirePokemon("Squirtle", 500, 10, 5));
        user1.addPokemon(new WaterPokemon("Squirtle", 100, 10, 5));
        user1.addPokemon(new GrassPokemon("Bulbasaur", 100, 10, 5));
        
        User user2 = new User("Gary");
        user2.addPokemon(new FirePokemon("Charmander", 100, 20, 5));
        user2.addPokemon(new WaterPokemon("Squirtle", 100, 10, 5));
        user2.addPokemon(new GrassPokemon("Bulbasaur", 100, 10, 5));

        Battle.fight(user1, user2);

    }
}