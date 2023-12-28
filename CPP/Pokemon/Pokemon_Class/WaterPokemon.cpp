#include "WaterPokemon.hpp"

WaterPokemon::WaterPokemon(std::string nom, int niveau, TypeList type, int exp, int vie, int attaque, int defense, int vitesse, int nbEau) : Pokemon(nom, niveau, type, exp, vie, attaque, defense, vitesse), nbEau(nbEau) {}

void WaterPokemon::Afficher() const {
    Pokemon::Afficher();
    std::cout << "nbEau: " << nbEau << std::endl;
}

void WaterPokemon::operator ++() {
    Pokemon::operator++();
    ++nbEau;
}

std::ostream& operator<<(std::ostream& os, const WaterPokemon& p) {
    os << static_cast<const Pokemon&>(p);
    os << "nbEau: " << p.nbEau << std::endl;
    return os;
}

// Path: Pokemon_Class/main.cpp