public class WaterPokemon extends Pokemon {
    public WaterPokemon(String name, int hp, int attack, int defense) {
        super(name, "Water", hp, attack, defense);
    }

    @Override
    public void attack(Pokemon p) {
        if (p.getType().equals("Fire")) {
            int damage = this.getAttack() - p.getDefense();
            if (damage < 0) damage = 0;
            p.setHp(p.getHp() - damage * 2);
        } else {
            super.attack(p);
        }
    }
}