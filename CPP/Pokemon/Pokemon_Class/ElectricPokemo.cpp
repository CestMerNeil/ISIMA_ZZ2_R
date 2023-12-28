#include "ElectricPokemon.hpp"

ElectricPokemon::ElectricPokemon(std::string nom, int niveau, TypeList type, int exp, int vie, int attaque, int defense, int vitesse, int nbElec) : Pokemon(nom, niveau, type, exp, vie, attaque, defense, vitesse), nbElec(nbElec) {}

void ElectricPokemon::Afficher() const {
    Pokemon::Afficher();
    std::cout << "nbElec: " << nbElec << std::endl;
}

void ElectricPokemon::operator ++() {
    Pokemon::operator++();
    ++nbElec;
}

std::ostream& operator<<(std::ostream& os, const ElectricPokemon& p) {
    os << static_cast<const Pokemon&>(p);
    os << "nbElec: " << p.nbElec << std::endl;
    return os;
}

// Path: Pokemon_Class/ElectricPokemo.cpp