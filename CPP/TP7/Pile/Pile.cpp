#include "Pile.hpp"

Pile::Pile() {
    capacite = 10;
    taille = 0;
    pile = new int[capacite];
}

Pile::Pile(int i) {
    if (i <= 0) {
        throw std::invalid_argument("La capacite de la pile doit etre positive");
    }
    capacite = i;
    taille = 0;
    pile = new int[capacite];
}

Pile::~Pile() {
    delete[] pile;
}

bool Pile::empty() {
    return taille == 0;
}

void Pile::push(int i) {
    if (taille == capacite) {
        throw std::invalid_argument("La pile est pleine");
    }
    pile[taille] = i;
    taille++;
}

int Pile::pop() {
    if (taille == 0) {
        throw std::invalid_argument("La pile est vide");
    }
    taille--;
    return pile[taille];
}

int Pile::top() {
    if (taille == 0) {
        throw std::invalid_argument("La pile est vide");
    }
    return pile[taille - 1];
}

int Pile::size() {
    return taille;
}
