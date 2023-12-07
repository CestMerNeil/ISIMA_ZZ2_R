#include "Cercle.hpp"

Cercle::Cercle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

Cercle::Cercle(int cx, int cy, int rayon) {
    this->x = cx - rayon;
    this->y = cy - rayon;
    this->w = rayon * 2;
    this->h = rayon * 2;
}

std::string Cercle::toString() {
    return "Cercle(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(w) + ", " +
           std::to_string(h) + ")";
}

// definition de la classe Cercle