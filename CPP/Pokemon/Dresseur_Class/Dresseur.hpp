#ifndef DRESSEUR_HPP
#define DRESSEUR_HPP

#include <string>
#include <iostream>
#include <vector>

#include "../Pokemon_Class/Pokemon.hpp"
#include "../Arene_Class/Badge.hpp"

class Dresseur {
private:
    std::string nom;
    int nbPokemon;
    std::vector<Pokemon> equipe;
    std::vector<Badge> badges;
public:
    Dresseur(std::string nom);
    void AjouterPokemon(Pokemon p);
    void Afficher() const;
    friend std::ostream& operator<<(std::ostream& os, const Dresseur& d);
    void entrainerPokemon(Pokemon& p);
    void getBadge(Badge b);
    void afficherBadge() const;

    bool battre(Dresseur& d);
    // true -> this win
    // false -> d win

    // Getter and Setter
    std::string getNom() const { return nom; }
    int getNbPokemon() const { return nbPokemon; }
    std::vector<Pokemon> getEquipe() const { return equipe; }
    std::vector<Badge> getBadges() const { return badges; }

    void setNom(std::string nom) { this->nom = nom; }
    void setNbPokemon(int nbPokemon) { this->nbPokemon = nbPokemon; }
    void setEquipe(std::vector<Pokemon> equipe) { this->equipe = equipe; }
    void setBadges(std::vector<Badge> badges) { this->badges = badges; }
};

#endif
