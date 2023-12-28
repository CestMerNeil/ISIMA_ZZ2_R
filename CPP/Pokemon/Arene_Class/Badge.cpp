#include "Badge.hpp"

Badge::Badge(std::string nom, ColorList color) : nom(nom), color(color) {}

std::ostream &operator<<(std::ostream &os, const Badge &b) {
    os << "Badge: " << b.nom << std::endl;
    os << "Color: " << b.color << std::endl;
    return os;
}