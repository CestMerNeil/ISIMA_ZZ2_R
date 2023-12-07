#include <iostream>
#include <cstdlib>

class Bavarde {
    private:
    int m_id;
    
    public:
    //static int s_count = 0;
    Bavarde(){ Bavarde(0); }
    Bavarde(int x) : m_id(x) { std::cout << "Constructeur " << m_id << std::endl; }
    ~Bavarde() { std::cout << "Destructeur " << m_id << std::endl; }
    void afficher() { std::cout << "Je suis l'objet " << m_id << std::endl; }
} bizarre(1);

Bavarde globale(2);

class Couple {
    private:
    Bavarde bavarde;
    Bavarde b;
    public:
    Couple() {
        std::cout << "C'est le constructeur de Couple~" << std::endl;
        bavarde.afficher();
        b.afficher();
    }
    Couple(Bavarde b) : bavarde(b) {
        std::cout << "C'est le constructeur de Couple~" << std::endl;
        bavarde.afficher();
        b.afficher();
    }

    ~Couple() {
        std::cout << "Couple Deconstruction" << std::endl;
    }
};

class Famille {
    private:
    Bavarde *p;

    public:
    Famille(int n) {
        p = new Bavarde[n];
    }

    ~Famille() {
        delete[] p;
    }

};

void fonction(Bavarde b) { std::cout << "Appel de fonction" << std::endl; }

int main(int, char **) {
    //Bavarde::s_count = 0;
    Bavarde b1(3);
    Bavarde b2(4);
    Bavarde * p = new Bavarde(5);
    fonction(bizarre);
    delete p;

    const int TAILLE = 20;
    
    Bavarde tab1[TAILLE];
    Bavarde * tab2 = new Bavarde[TAILLE];

    for (int i=0; i<TAILLE; ++i) {
        tab1[i].afficher();
        std::cout << "La table 1 .afficher est fini. Le numero est " << i <<std::endl;
        tab2[i].afficher();
    }

    std::cout << " It's time for Couple !!! " << std::endl;

    Couple c1;
    Couple c2(b2);

    std::cout << " It's time for Famille !!!" << std::endl;

    Famille f1(20);

    return 0;
}