public class FirePokemon extends Pokemon {
    public FirePokemon(String name, int hp, int attack, int defense) {
        super(name, "Fire", hp, attack, defense);
    }

    @Override
    public void attack(Pokemon p) {
        if (p.getType().equals("Grass")) {
            int damage = this.getAttack() - p.getDefense();
            if (damage < 0) damage = 0;
            p.setHp(p.getHp() - damage * 2);
        } else {
            super.attack(p);
        }
    }
}