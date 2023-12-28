#ifndef FIREPOKEMON_HPP
#define FIREPOKEMON_HPP

#include <string>
#include <iostream>

#include "Pokemon.hpp"

class FirePokemon : public Pokemon {
private:
    int nbFeu;
public:
    FirePokemon(std::string nom, int niveau, TypeList type, int exp, int vie, int attaque, int defense, int vitesse, int nbFeu);
    void Afficher() const override;
    void operator ++() override;
    friend std::ostream& operator<<(std::ostream& os, const FirePokemon& p);
};

#endif