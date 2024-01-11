#include <iostream>
#include <string>
#include <vector>
#include "ZZ.hpp"
#include <algorithm>

using vzz = std::vector<ZZ>;

vzz zz;

bool compare(const ZZ& z1, const ZZ& z2) {
    return z1.compare(z2);
}

bool compare_note(const ZZ& z1, const ZZ& z2) {
    return z1.get_note() < z2.get_note();
}

bool compare_note_reverse(const ZZ& z1, const ZZ& z2) {
    return z1.get_note() > z2.get_note();
}

int main(int, char**) {
    
    //std::sort(zz.begin(), zz.end(), compare);
    
    ZZ z1("Doe", "John", 13);
    ZZ z2("Jefferies", "John", 12);
    ZZ z3("Biden", "Joe", 12.5);

    zz.push_back(z1);
    zz.push_back(z2);
    zz.push_back(z3);

    std::sort(zz.begin(), zz.end(), compare_note);
    for (std::vector<ZZ>::iterator it = zz.begin(); it != zz.end(); ++it) {
        std::cout << *it << std::endl;
    }
    
    std::cout << std::endl;

    std::sort(zz.rbegin(), zz.rend(), compare_note);
    for (std::vector<ZZ>::iterator it = zz.begin(); it != zz.end(); ++it) {
        std::cout << *it << std::endl;
    }
    return 0;
}

