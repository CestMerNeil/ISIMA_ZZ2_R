#include <iostream>

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

void fonction(Bavarde b) { std::cout << "Appel de fonction" << std::endl; }

int main(int, char **) {
    //Bavarde::s_count = 0;
    Bavarde b1(3);
    Bavarde b2(4);
    // Bavarde * p = new Bavarde(5);
    fonction(bizarre);
    // delete p;

    return 0;
}