#ifndef ELECTRICPOKEMON_HPP
#define ELECTRICPOKEMON_HPP

#include <string>
#include <iostream>

#include "Pokemon.hpp"

class ElectricPokemon : public Pokemon {
private:
    int nbElec;
public:
    ElectricPokemon(std::string nom, int niveau, TypeList type, int exp, int vie, int attaque, int defense, int vitesse, int nbElec);
    void Afficher() const override;
    void operator ++() override;
    friend std::ostream& operator<<(std::ostream& os, const ElectricPokemon& p);
}; 

#endif

// Path: Pokemon_Class/ElectricPokemon.cpp