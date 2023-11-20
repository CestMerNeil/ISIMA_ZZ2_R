import java.util.Scanner;

public class Battle {
    public static Pokemon fight(Pokemon p1, Pokemon p2) {
        while (p1.getHp() > 0 && p2.getHp() > 0) {
            p1.attack(p2);
            if (p2.getHp() <= 0) break; // 如果 p2 生命值为0，结束战斗
            p2.attack(p1);
            System.out.println(p1.getName() + " HP: " + p1.getHp());
            System.out.println(p2.getName() + " HP: " + p2.getHp());
        }
        return (p1.getHp() > 0) ? p1 : p2;
    }

    public static Pokemon fight(User u1, User u2) {
            System.out.println("Battle between " + u1.getName() + " and " + u2.getName());
            Pokemon u1_pokemon = choosePokemon(u1);
            Pokemon u2_pokemon = choosePokemon(u2);

            return fight(u1_pokemon, u2_pokemon);
    }

    private static Pokemon choosePokemon(User user) {
        System.out.println("Please choose your Pokemon of " + user.getName());
        user.listPokemons();
        Scanner scanner = new Scanner(System.in);
        while (true) {
            try {
                int choice = scanner.nextInt();
                Pokemon pokemon = user.getPokemon(choice);
                System.out.println("You have chosen " + pokemon.getName());
                return pokemon;
            } catch (Exception e) {
                System.out.println("Invalid input, please try again.");
                scanner.nextLine(); // 清除输入缓冲区
            }
        }
    }
}