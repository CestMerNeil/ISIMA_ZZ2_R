#ifndef WATERPOKEMON_HPP
#define WATERPOKEMON_HPP

#include <string>
#include <iostream>

#include "Pokemon.hpp"

class WaterPokemon : public Pokemon {
private:
    int nbEau;
public:
    WaterPokemon(std::string nom, int niveau, TypeList type, int exp, int vie, int attaque, int defense, int vitesse, int nbEau);
    void Afficher() const override;
    void operator ++() override;
    friend std::ostream& operator<<(std::ostream& os, const WaterPokemon& p);
};

#endif