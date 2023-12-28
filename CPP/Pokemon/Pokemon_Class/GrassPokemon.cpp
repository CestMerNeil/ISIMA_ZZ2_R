#include "GrassPokemon.hpp"

GrassPokemon::GrassPokemon(std::string nom, int niveau, TypeList type, int exp, int vie, int attaque, int defense, int vitesse, int nbPlante) : Pokemon(nom, niveau, type, exp, vie, attaque, defense, vitesse), nbPlante(nbPlante) {}

void GrassPokemon::Afficher() const {
    Pokemon::Afficher();
    std::cout << "nbPlante: " << nbPlante << std::endl;
}

void GrassPokemon::operator ++() {
    Pokemon::operator++();
    ++nbPlante;
}

std::ostream& operator<<(std::ostream& os, const GrassPokemon& p) {
    os << static_cast<const Pokemon&>(p);
    os << "nbPlante: " << p.nbPlante << std::endl;
    return os;
}

// Path: Pokemon_Class/main.cpp