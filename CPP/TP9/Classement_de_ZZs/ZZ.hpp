#ifndef ZZ_HPP
#define ZZ_HPP

#include <iostream>
#include <string>

class ZZ {
    private:
    std::string nom, prenom;
    double note;

    public:
    ZZ(std::string);
    ZZ(std::string, std::string);
    ZZ(std::string, std::string, double);

    bool operator<(const ZZ&) const;
    bool compare(const ZZ&) const;
    double get_note() const;

    friend std::ostream& operator<<(std::ostream&, const ZZ&);
};


#endif // ZZ_HPP