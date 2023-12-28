#ifndef BADGE_HPP
#define BADGE_HPP

#include <string>
#include <iostream>

enum ColorList {
    Red,
    Blue,
    Green,
    Yellow
};

class Badge {
public:
    std::string nom;
    ColorList color;

    Badge(std::string nom, ColorList color);
    friend std::ostream& operator<<(std::ostream& os, const Badge& b);
};

#endif
