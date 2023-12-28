#ifndef POKEBALL_HPP
#define POKEBALL_HPP

#include <string>
#include <iostream>

enum TypeList {
    Fire,
    Water,
    Grass,
    Electric
};

class Pokemon {
private:
    std::string nom;
    int niveau;
    TypeList type;
    int exp;
    int vie;
    int attaque;
    int defense;
    int vitesse;
public:
    Pokemon(std::string nom, int niveau, TypeList type, int exp, int vie, int attaque, int defense, int vitesse);
    virtual void Afficher() const;
    friend std::ostream& operator<<(std::ostream& os, const Pokemon& p);
    virtual void operator ++();

    bool combattre(Pokemon& p);

    // Getters and Setters
    std::string getNom() const { return nom; };
    TypeList getType() const { return type; };
    int getNiveau() const { return niveau; };
    int getExp() const { return exp; };
    int getVie() const { return vie; };
    int getAttaque() const { return attaque; };
    int getDefense() const { return defense; };
    int getVitesse() const { return vitesse; };
    
    void setNom(std::string nom) { this->nom = nom; };
    void setNiveau(int niveau) { this->niveau = niveau; };
    void setType(TypeList type) { this->type = type; };
    void setExp(int exp) { this->exp = exp; };
    void setVie(int vie) { this->vie = vie; };
    void setAttaque(int attaque) { this->attaque = attaque; };
    void setDefense(int defense) { this->defense = defense; };
    void setVitesse(int vitesse) { this->vitesse = vitesse; };

};

#endif