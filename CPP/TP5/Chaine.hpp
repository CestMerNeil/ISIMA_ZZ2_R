#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class Chaine  {
private:
    char* tab;
    unsigned int taille;
public:
    Chaine();
    Chaine(const int);
    Chaine(const char* s);
    Chaine(const Chaine& s);
    int getCapacite() const;
    char* c_str() const;

    void afficher() const;
    void afficher(std::ostream& os) const;
    void operator=(const Chaine& s);
    void operator<<(const Chaine& s);
    void operator<<(const char* s);
    friend std::ostream& operator<<(std::ostream& os, const Chaine& s);


};

#endif
