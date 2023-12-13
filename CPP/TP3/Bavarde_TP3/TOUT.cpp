#include <iostream>
#include <cstdlib>

class Bavarde
{
private:
    int m_id;

public:
    static int s_count;
    Bavarde() : Bavarde(0)
    {
        std::cout << "Constructeur par defaut" << std::endl;
    }
    Bavarde(int x) : m_id(x) { std::cout << "Constructeur " << m_id << std::endl; }
    ~Bavarde() { std::cout << "Destructeur " << m_id << std::endl; }
    void afficher() { std::cout << "Je suis l'objet " << m_id << std::endl; }
} bizarre(1);

Bavarde globale(2);

void test(Bavarde b) { std::cout << "Appel de test" << std::endl; }

class Couple
{
private:
    Bavarde bavarde;
    Bavarde b;

public:
    Couple()
    {
        std::cout << "C'est le constructeur de Couple~" << std::endl;
        bavarde.afficher();
        b.afficher();
    }
    Couple(Bavarde b) : bavarde(b)
    {
        std::cout << "C'est le constructeur de Couple~" << std::endl;
        bavarde.afficher();
        b.afficher();
    }

    ~Couple()
    {
        std::cout << "Couple Deconstruction" << std::endl;
    }
};

class Famille
{
private:
    Bavarde *p;

public:
    Famille(int n)
    {
        p = new Bavarde[n];
    }

    ~Famille()
    {
        delete[] p;
    }
};

void fonction(Bavarde b) { std::cout << "Appel de fonction" << std::endl; }

Bavarde test2a() {
    std::cout << "Appel de test2a" << std::endl;
    return Bavarde();
}

Bavarde test2b() {
    std::cout << "Appel de test2b" << std::endl;
    Bavarde b;
    std::cout << "Adresse de b : " << &b << std::endl;
    return b;
}

void test3(Bavarde &b) {
    std::cout << "Appel de fonction avec reference" << std::endl;
    std::cout << "Adresse d'object : " << &b << std::endl;
}

void test4(Bavarde *b) {
    std::cout << "Appel de fonction avec pointeur" << std::endl;
    std::cout << "Adresse d'object : " << b << std::endl;
}

int Bavarde::s_count = 0;


int main(int, char **)
{
    std::cout << " =========================================== " << std::endl;
    Bavarde b1(3);
    Bavarde b2(4);
    Bavarde *p = new Bavarde(5);
    fonction(bizarre);
    delete p;

    const int TAILLE = 20;

    Bavarde tab1[TAILLE];
    Bavarde *tab2 = new Bavarde[TAILLE];

    for (int i = 0; i < TAILLE; ++i)
    {
        tab1[i].afficher();
        std::cout << "La table 1 .afficher est fini. Le numero est " << i << std::endl;
        tab2[i].afficher();
    }

    std::cout << " It's time for Couple !!! " << std::endl;

    Couple c1;
    Couple c2(b2);

    std::cout << " It's time for Famille !!!" << std::endl;

    Famille f1(20);

    std::cout << " =========================================== " << std::endl;
    std::cout << " ================ TP4 ====================== " << std::endl;

    test(b1);
    std::cout << " =========================================== " << std::endl;
    Bavarde objet_test2a = test2a();
    std::cout << "Adresse de objet_test2a : " << &objet_test2a << std::endl;
    std::cout << " =========================================== " << std::endl;
    Bavarde objet_test2b = test2b();
    std::cout << "Adresse de objet_test2b : " << &objet_test2b << std::endl;
    std::cout << " =========================================== " << std::endl;

    std::cout << "Adresse de b1 : " << &b1 << std::endl;
    test3(b1);

    std::cout << " =========================================== " << std::endl;

    std::cout << "Adresse de b1 : " << &b1 << std::endl;
    test4(&b1);
    std::cout << " =========================================== " << std::endl;

    return 0;
}