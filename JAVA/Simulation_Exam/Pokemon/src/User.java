import java.util.ArrayList;

public class User {
    private String name;
    private ArrayList<Pokemon> pokemons;

    public User(String name) {
        this.name = name;
        pokemons = new ArrayList<Pokemon>();
    }

    public String getName() { return name; }

    public void addPokemon(Pokemon p) {
        pokemons.add(p);
    }

    public void removePokemon(Pokemon p) {
        pokemons.remove(p);
    }

    public Pokemon getPokemon(int index) {
        return pokemons.get(index-1);
    }

    public void listPokemons() {
        for (Pokemon p : pokemons) {
            int i = pokemons.indexOf(p) + 1;
            System.out.println(i + ". " + p.getName());
        }
    }
}