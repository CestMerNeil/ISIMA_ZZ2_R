public abstract class Pokemon {

    private String name;
    private String type;
    private int hp;
    private int attack;
    private int defense;

    public Pokemon(){
        name = null;
    }

    public Pokemon(String name, String type, int hp, int attack, int defense) {
        this.name = name;
        this.type = type;
        this.hp = hp;
        this.attack = attack;
        this.defense = defense;
    }

    // Getters
    public String getName() { return name; }
    public String getType() { return type; }
    public int getHp() { return hp; }
    public int getAttack() { return attack; }
    public int getDefense() { return defense; }

    // Setters
    public void setName(String name) { this.name = name; }
    public void setType(String type) { this.type = type; }
    public void setHp(int hp) { this.hp = hp; }
    public void setAttack(int attack) { this.attack = attack; }
    public void setDefense(int defense) { this.defense = defense; }

    public void attack(Pokemon p) {
        int damage = this.getAttack() - p.getDefense();
        if (damage < 0) damage = 0;
        p.setHp(p.getHp() - damage);
    }
}