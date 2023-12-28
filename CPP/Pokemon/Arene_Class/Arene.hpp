#ifndef ARENE_HPP
#define ARENE_HPP

#include <string>
#include <iostream>

#include "../Dresseur_Class/Dresseur.hpp"
#include "Badge.hpp"

class Arene {
private:
    std::string nom;
    Dresseur hostDresseur;
    Badge badge;
public:
    Arene(std::string nom, Dresseur hostDresseur, Badge badge);
    void Afficher() const;

    friend std::ostream& operator<<(std::ostream& os, const Arene& a);

    // Pour guest dresseur
    bool challenger(Dresseur& d);

    // Getter and Setter
    std::string getNom() const { return nom; }
    Dresseur getHostDresseur() const { return hostDresseur; }
    void setNom(std::string nom) { this->nom = nom; }
    void setHostDresseur(Dresseur hostDresseur) { this->hostDresseur = hostDresseur; } 

};

#endif