#ifndef GRASSPOKEMON_HPP
#define GRASSPOKEMON_HPP

#include <string>
#include <iostream>

#include "Pokemon.hpp"

class GrassPokemon : public Pokemon {
private:
    int nbPlante;
public:
    GrassPokemon(std::string nom, int niveau, TypeList type, int exp, int vie, int attaque, int defense, int vitesse, int nbPlante);
    void Afficher() const override;
    void operator ++() override;
    friend std::ostream& operator<<(std::ostream& os, const GrassPokemon& p);
};

#endif