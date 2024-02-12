#ifndef ferme__hpp
#define ferme__hpp

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <vector>
#include <algorithm>

class Communiquer {
    public:
    virtual void communiquer(std::ostream& os) const = 0;
    virtual ~Communiquer() {}
};

class Produit {
    protected:
    std::string nom;
    public:
    Produit() {}
    Produit(std::string str) : nom(str) {}
    std::string getNom() const { return nom; } 
    bool isEqual(Produit p) const { return nom==p.nom; }
    bool operator==(Produit p) const { return nom==p.nom; } 
    friend std::ostream& operator<<(std::ostream& os, const Produit& p) {
        return os<<p.nom;
    }
};

class PeutPasProduireException : public std::exception {
    public:
    const char* what() const noexcept override {
        return "peut_pas_produire";
    }
};

class Animal {
    private:
    bool malade;
    std::string surnom;
    
    public:
    static int compteur;
    Animal() { compteur++; }
    Animal(const Animal&) { compteur++; }
    virtual ~Animal() {}
    Animal(std::string str) : surnom(str) { compteur++; }
    bool getMalade() const { return malade; }
    std::string getSurnom() const { return surnom; } 
    static int getCompteur() { return compteur; }

    void setMalade(bool b) { this->malade = b; }
    void setSurnom(std::string str) { this->surnom = str; }

    virtual Produit produire() const=0;
    virtual void nourrir(std::ostream&) const =0;
};

class Vache : public Animal, public Communiquer {
    private:
    Produit produit;
    public:
    Vache(std::string str) : Animal(str), produit(Produit("lait")) {}
    Vache(const Vache& other) : Animal(other) {} 
    Produit produire() const override { 
        if (getMalade() == true){
            throw PeutPasProduireException();
        } 
        return produit; 
    }
    void meugler(std::ostream & os) const {
        os << "la vache " << getSurnom() << " meugle";
    }
    void communiquer(std::ostream& os) const override {
        os << "la vache " << getSurnom() << " meugle";
    }
    void nourrir(std::ostream& os) const override {
        os << "la vache " << getSurnom() << " meugle";
    }
};

class Poule : public Animal, public Communiquer {
    private:
    Produit produit;
    public:
    Poule(std::string str) : Animal(str), produit(Produit("oeuf")) {}
    Produit produire() const override { 
        if (getMalade() == true){
            throw PeutPasProduireException();
        } 
        return produit; 
    }
    void glousser(std::ostream & os) const {
        os << "la poule " << getSurnom() << " glousse";
    }
    void communiquer(std::ostream& os) const override {
        os << "la poule " << getSurnom() << " glousse";
    } 
    void nourrir(std::ostream& os) const override {
        os << "la poule " << getSurnom() << " glousse";
    }
};

class Ferme {
    protected:
    std::vector<Animal*> list;
    public:
    Ferme() {}
    ~Ferme() {
        for(const auto& i : list) {
            delete i;
        }
    }
    int size() const { return list.size(); }
    void acheter(Animal* a) {
        list.push_back(a);
    }
    void nourrirAnimaux(std::ostream& os) const {
        for(const auto& i : list) {
            i->nourrir(os);
            os << '\n';
        }
    }

    Animal* vendre(std::string str) {
        for(auto it = list.begin(); it != list.end(); ++it) {
            if (str == (*it)->getSurnom()) {
                Animal* vendu = *it;
                list.erase(it);
                return vendu;
            }
        }
        return nullptr;
    }
};


#endif
