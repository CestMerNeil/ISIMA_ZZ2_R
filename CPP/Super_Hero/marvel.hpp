#ifndef marvel__hpp
#define marvel__hpp

#include <string>
#include <iostream>
#include <stdexcept>
#include <exception>
#include <vector>

class AnonymeException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "identite anonyme";
    }
};

class Capacite
{
protected:
    std::string nom;
    int niveau;

public:
    virtual ~Capacite() {}
    Capacite(std::string str, int n) : nom(str), niveau(n) {}
    virtual void utiliser(std::ostream &) = 0;
    int getNiveau() const { return niveau; }
    std::string getNom() const { return nom; }
    virtual Capacite *clone() const = 0;
};

class Materiel : public Capacite
{
public:
    Materiel(std::string str, int n) : Capacite(str, n) {}
    void actionner(std::ostream &os)
    {
        os << nom << " [" << niveau << "] en action";
    }
    void utiliser(std::ostream &os) override { actionner(os); }
    Materiel *clone() const override { return new Materiel(*this); }
};

class Physique : public Capacite
{
public:
    Physique(std::string str, int n) : Capacite(str, n) {}
    void exercer(std::ostream &os)
    {
        os << nom << " [" << niveau << "]";
    }
    void utiliser(std::ostream &os) override { exercer(os); }
    Physique *clone() const override { return new Physique(*this); }
};

class Psychique : public Capacite
{
public:
    Psychique(std::string str, int n) : Capacite(str, n) {}
    void penser(std::ostream &os)
    {
        os << nom << " [" << niveau << "]";
    }
    void utiliser(std::ostream &os) override { penser(os); }
    Psychique *clone() const override { return new Psychique(*this); }
};

class Personne
{
public:
    enum Genre
    {
        HOMME,
        FEMME,
        INDETERMINE
    };
    Personne() : niveau(0) {}
    Personne(std::string prenom, std::string nom) : prenom(prenom), nom(nom), niveau(0) {}
    Personne(std::string prenom, std::string nom, Genre genre) : prenom(prenom), nom(nom), genre(genre), niveau(0) {}
    Personne(Personne *p) : Personne(p->prenom, p->nom, p->genre) {}
    Personne(const Personne &p)
    {
        this->prenom = p.prenom;
        this->nom = p.nom;
        this->genre = p.genre;
        this->niveau = p.niveau;
        for (const auto &i : p.capacite)
        {
            this->capacite.push_back(i->clone());
        }
    }
    virtual ~Personne() = default;
    std::string getPrenom() const { return prenom; }
    virtual std::string getNom() const { return nom; }
    Genre getGenre() const { return genre; }
    void afficher(std::ostream &os) const
    {
        switch (genre)
        {
        case HOMME:
            os << prenom << " " << nom << " [HOMME]";
            break;
        case FEMME:
            os << prenom << " " << nom << " [FEMME]";
            break;
        case INDETERMINE:
            os << prenom << " " << nom << " [INDETERMINE]";
            break;
        default:
            // In case of nothing meet.
            break;
        }
    }
    bool operator==(const Personne &p) const
    {
        return prenom == p.prenom && nom == p.nom && genre == p.genre;
    }

    friend void operator<<(std::ostream &os, const Personne &p)
    {
        p.afficher(os);
    }

    void ajouter(Capacite *m)
    {
        capacite.push_back(m);
        niveau += m->getNiveau();
    }

    int getNiveau() const { return niveau; }

    Personne & operator=(const Personne &p)
    {
        if (this != &p)
        {
            this->prenom = p.prenom;
            this->nom = p.nom;
            this->genre = p.genre;
            this->niveau = p.niveau;
            for (auto &i : capacite)
            {
                delete i;
            }
            capacite.clear();
            for (auto &i : p.capacite)
            {
                this->capacite.push_back(i->clone());
            }
        }
        return *this;
    }

    static Personne INCONNU;

protected:
    std::string prenom;
    std::string nom;
    Genre genre;
    std::vector<Capacite *> capacite;
    int niveau;
};

class Super
{
protected:
    std::string super_nom;
    Personne personne;
    bool anonyme;

public:
    Super(const std::string &str, const Personne &p) : personne(p), super_nom(str), anonyme(true) {}
    Super(const Super &super) : personne(super.personne), super_nom(super.super_nom), anonyme(super.anonyme) {}
    bool estAnonyme() const { return anonyme; }
    std::string getNom() const { return anonyme ? super_nom : personne.getNom(); }
    void setNom(std::string str) { this->super_nom = str; }
    void enregistrer() { this->anonyme = false; }
    void ajouter(Capacite * capacite) { personne.ajouter(capacite); }
    int getNiveau() const { return personne.getNiveau(); }
    const Personne &getIdentite() const
    {
        if (anonyme)
        {
            throw AnonymeException();
        }
        return personne;
    }
    void setIdentite(const Personne &p)
    {
        this->personne = p;
        this->anonyme = true;
    }
    Super operator=(const Super &super)
    {
        this->super_nom = super.super_nom;
        this->anonyme = super.anonyme;
        this->personne = super.personne;
        return *this;
    }
};

class Equipe
{
protected:
    std::vector<Super *> list;
    std::string nom;
    int niveau;

public:
    Equipe(std::string str) : nom(str), niveau(0) {}
    int getNombre() const { return list.size(); }
    void ajouter(Super *s)
    {
        list.push_back(s);
        niveau += s->getIdentite().getNiveau();
    }
    int getNiveau() const { return niveau; }
};

#endif
