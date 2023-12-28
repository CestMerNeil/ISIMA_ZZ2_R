#include "FirePokemon.hpp"

FirePokemon::FirePokemon(std::string nom, int niveau, TypeList type, int exp, int vie, int attaque, int defense, int vitesse, int nbFeu) : Pokemon(nom, niveau, type, exp, vie, attaque, defense, vitesse), nbFeu(nbFeu) {}

void FirePokemon::Afficher() const {
    Pokemon::Afficher();
    std::cout << "nbFeu: " << nbFeu << std::endl;
}

void FirePokemon::operator ++() {
    Pokemon::operator++();
    ++nbFeu;
}

std::ostream& operator<<(std::ostream& os, const FirePokemon& p) {
    os << static_cast<const Pokemon&>(p);
    os << "nbFeu: " << p.nbFeu << std::endl;
    return os;
}

// Path: Pokemon_Class/GrassPokemon.cpp

