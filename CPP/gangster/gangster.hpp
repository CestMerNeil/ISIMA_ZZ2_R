// NOM    : XIE
// PRENOM : Ao

#ifndef __gangster_hpp__
#define __gangster_hpp__

#include <string>
#include <iostream>
#include <vector>
#include <exception>

class InconnuException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "personnalite inconnue";
    }
};

class Personne
{
protected:
    std::string nom;

public:
    Personne(std::string str) : nom(str) {}
    Personne() {}

    void setNom(std::string str) { this->nom = str; }
    std::string getNom() const { return nom; }
    bool equals(const Personne &p) const { return nom == p.nom; }
    static const Personne INCONNU;
};

class Gangster
{
protected:
    int ID_this;
    int influence;
    Personne p;

public:
    static int ID;
    Gangster() : ID_this(ID), influence(1), p(Personne::INCONNU)
    {
        ID++;
    }
    int getId() const { return ID_this; }
    virtual int getInfluence() const { return influence; }
    const Personne &getPersonne() const
    {
        if (p.getNom() != "INCONNU")
        {
            return p;
        }
        else
        {
            throw InconnuException();
        }
    }
    void setPersonne(const Personne &personne) { this->p = personne; }
    bool operator<(const Gangster &g) const
    {
        if (influence == g.getInfluence())
        {
            return ID_this > g.ID_this;
        }
        else
        {
            return influence < g.getInfluence();
        }
    }
};

class Chef : public Gangster
{
protected:
    std::vector<Gangster *> list;

public:
    Chef() : Gangster() {}
    void commande(Gangster *g)
    {
        list.push_back(g);
        int inf_tmp = 0;
        for (const auto &i : list)
        {
            inf_tmp += g->getInfluence();
        }
        this->influence = inf_tmp + 10;
    }
    void commande(Chef *c)
    {
        list.push_back(c);
        influence = c->getInfluence() + 10;
    }
};

class Famille {
protected:
    std::vector<Gangster*> list;
public:
    void ajouter(Gangster* g) { list.push_back(g); }
    void listePersonnes(std::ostream& os) const {
        for(const auto& i : list) {
            os << i->getPersonne().getNom();
        }
    }
    friend std::ostream& operator<<(std::ostream& os, const Famille& f) {
        f.listePersonnes(os);
        return os;
    }
};

#endif
