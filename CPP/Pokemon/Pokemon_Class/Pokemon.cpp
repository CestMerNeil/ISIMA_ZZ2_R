#include "Pokemon.hpp"

Pokemon::Pokemon(std::string nom, int niveau, TypeList type, int exp, int vie, int attaque, int defense, int vitesse) : nom(nom), niveau(niveau), type(type), exp(exp), vie(vie), attaque(attaque), defense(defense), vitesse(vitesse) {}

void Pokemon::Afficher() const {
    std::cout << "nom: " << nom << std::endl;
    std::cout << "niveau: " << niveau << std::endl;
    std::cout << "type: " << type << std::endl;
    std::cout << "exp: " << exp << std::endl;
    std::cout << "vie: " << vie << std::endl;
    std::cout << "attaque: " << attaque << std::endl;
    std::cout << "defense: " << defense << std::endl;
    std::cout << "vitesse: " << vitesse << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Pokemon& p) {
    os << "nom: " << p.nom << std::endl;
    os << "niveau: " << p.niveau << std::endl;
    os << "type: " << p.type << std::endl;
    os << "exp: " << p.exp << std::endl;
    os << "vie: " << p.vie << std::endl;
    os << "attaque: " << p.attaque << std::endl;
    os << "defense: " << p.defense << std::endl;
    os << "vitesse: " << p.vitesse << std::endl;
    return os;
}

void Pokemon::operator ++() {
    ++niveau;
    ++exp;
    ++vie;
    ++attaque;
    ++defense;
    ++vitesse;
}

bool Pokemon::combattre(Pokemon& p) {
    // 属性相克矩阵，例如 Fire vs Grass = 2.0（倍伤害），Fire vs Water = 0.5（半伤害）
    float typeAdvantages[4][4] = {
        {1.0, 0.5, 2.0, 1.0}, // Fire
        {2.0, 1.0, 0.5, 1.0}, // Water
        {0.5, 2.0, 1.0, 1.0}, // Grass
        {1.0, 1.0, 1.0, 1.0}  // Electric
    };

    // 计算伤害函数
    auto calculateDamage = [&](Pokemon& attacker, Pokemon& defender) {
        float typeMultiplier = typeAdvantages[attacker.getType()][defender.getType()];
        return (attacker.getAttaque() / defender.getDefense()) * typeMultiplier;
    };

    // 循环战斗直到一方生命值为0
    while (this->vie > 0 && p.vie > 0) {
        if (this->vitesse >= p.vitesse) {
            // 先手方攻击
            p.vie -= calculateDamage(*this, p);
            if (p.vie <= 0) break; // 对方倒下
        }

        // 后手方反击
        this->vie -= calculateDamage(p, *this);
    }

    // 返回战斗结果：true表示赢了，false表示输了
    return this->vie > 0;
}
