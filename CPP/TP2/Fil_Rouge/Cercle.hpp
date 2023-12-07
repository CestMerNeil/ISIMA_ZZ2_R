// GARDIEN
#ifndef CERCLE_HPP
#define CERCLE_HPP

#include <string>

class Cercle {

private:
    int x;
    int y;
    int w; 
    int h;

public:
    Cercle(int, int, int, int);
    Cercle(int cx, int cy, int rayon);
    std::string toString();
};


#endif

// Declaration de la classe Cercle