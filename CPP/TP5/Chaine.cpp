#include "Chaine.hpp"
#include <cstring>
#include <iostream>

Chaine::Chaine() {
    taille = -1;
    tab = nullptr;
}

Chaine::Chaine(const char* s) {
    taille = strlen(s);
    tab = new char[taille + 1];
    strcpy(tab, s);
}

Chaine::Chaine(const Chaine& s) {
    taille = s.taille;
    tab = new char[taille + 1];
    strcpy(tab, s.tab);
}

int Chaine::getCapacite() const {
    return taille;
}

char* Chaine::c_str() const {
    return tab;
}

Chaine::Chaine(const int i) {
    taille = i;
    tab = new char[taille + 1];
    strcpy(tab, "");
}

void Chaine::afficher() const {
    std::cout << tab;
}

void Chaine::afficher(std::ostream& os) const {
    os << tab;
}

void Chaine::operator=(const Chaine& s) {
    taille = s.taille;
    tab = new char[taille + 1];
    strcpy(tab, s.tab);
}

// void Chaine::operator<<(const Chaine& s) {
//     taille = s.taille;
//     tab = new char[taille + 1];
//     strcpy(tab, s.tab);
// }

// void Chaine::operator<<(const char* s) {
//     taille = strlen(s);
//     tab = new char[taille + 1];
//     strcpy(tab, s);
// }

std::ostream& operator<<(std::ostream& os, const Chaine& s) {
    os << s.tab;
    return os;
}

char& Chaine::operator[](const int i) {
    if (i < 0) {
        throw OutOfRangeException();
    }
    else if (i == 1) {
        throw null_pointer();
    }
    else if (i > taille) {
        throw std::bad_alloc();
    }
    return tab[i];
}

char Chaine::operator[](const int i) const {
    if (i < 0) {
        throw OutOfRangeException();
    }
    else if (i == 1) {
        throw null_pointer();
    }
    else if (i > taille) {
        throw std::bad_alloc();
    }
    return tab[i];
}
