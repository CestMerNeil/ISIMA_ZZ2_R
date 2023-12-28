#ifndef ZZ_HPP
#define ZZ_HPP

#include <iostream>
#include <string>
#include <vector>

class ZZ {
public:
    std::string nom; 
    std::string prenom;
    double note;

    ZZ(std::string nom = "nom", std::string prenom = "prenom", double note = 0.0);
    friend std::ostream& operator<<(std::ostream& os, const ZZ& zz);
    friend bool operator<(const ZZ& zz1, const ZZ& zz2);
    friend std::istream& operator>>(std::istream& is, ZZ& zz);
};

//typedef std::vector<ZZ> vzz;

#endif