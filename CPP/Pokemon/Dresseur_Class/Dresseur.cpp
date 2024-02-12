#include "Dresseur.hpp"
#include <cstdlib>
#include <unistd.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

#include "../Exception/InvalidChoiceException.cpp"

Dresseur::Dresseur(std::string nom) : nom(nom), nbPokemon(0) {}

void Dresseur::AjouterPokemon(Pokemon p)
{
    equipe.push_back(p);
    nbPokemon++;
}

void Dresseur::Afficher() const
{
    std::cout << "Dresseur " << nom << " possede " << nbPokemon << " Pokemon" << std::endl;
    for (int i = 0; i < nbPokemon; i++)
    {
        std::cout << equipe[i] << std::endl;
    }
}

void Dresseur::getBadge(Badge b)
{
    badges.push_back(b);
}

std::ostream &operator<<(std::ostream &os, const Dresseur &d)
{
    os << "Dresseur " << d.nom << " possede " << d.nbPokemon << " Pokemon" << std::endl;
    for (int i = 0; i < d.nbPokemon; i++)
    {
        os << d.equipe[i] << std::endl;
    }
    os << std::endl;
    os << "Il a " << d.nbPokemon << " Pokemon dans son equipe" << std::endl;
    return os;
}

void Dresseur::entrainerPokemon(Pokemon &p)
{
    ++p;
}

/**
 * @brief
 * @return true if this win
 */
bool Dresseur::battre(Dresseur &d)
{
    //std::cout << "Dresseur " << nom << " veut battre Dresseur " << d.nom << std::endl;

    auto validateAndChoosePokemon = [&](Dresseur &dr)
    {
        std::cout << "Tour de " << dr.nom << std::endl;
        std::cout << "Choisir un Pokemon: " << std::endl;
        for (int i = 0; i < dr.nbPokemon; i++)
        {
            std::cout << i << ". " << dr.equipe[i].getNom() << std::endl;
        }
        int choix;
        std::cin >> choix;
        if (choix < 0 || choix >= dr.getNbPokemon())
        {
            throw InvalidChoiceException("Choix invalide, please choose again.");
        }
        return choix;
    };

    int choix_1, choix_2;
    try
    {
        choix_1 = validateAndChoosePokemon(*this);
        choix_2 = validateAndChoosePokemon(d);
    }
    catch (InvalidChoiceException &e)
    {
        std::cout << e.what() << std::endl;
        return false;
    }

    return equipe[choix_1].combattre(d.equipe[choix_2]);
}

void Dresseur::afficherBadge() const
{
    std::cout << "Dresseur " << nom << " possede " << badges.size() << " badges" << std::endl;
    for (int i = 0; i < badges.size(); i++)
    {
        std::cout << badges[i] << std::endl;
    }
}