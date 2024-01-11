#include "ZZ.hpp"

ZZ::ZZ(std::string n) : nom(n) {}
ZZ::ZZ(std::string n, std::string p) : nom(n), prenom(p) {}
ZZ::ZZ(std::string n, std::string p, double no) : nom(n), prenom(p), note(no) {}

bool ZZ::operator<(const ZZ& z) const {
    if(this->nom != z.nom) {
        return this->nom < z.nom;
    } 
    else {
        return this->prenom < z.prenom;
    }
}

bool ZZ::compare(const ZZ& z) const {
    if(this->nom != z.nom) {
        return this->nom < z.nom;
    } 
    else if (this->prenom != z.prenom) {
        return this->prenom < z.prenom;
    }
    else {
        return this->note < z.note;
    }
}

std::ostream& operator<<(std::ostream& os, const ZZ& z) {
    os << z.nom << " " << z.prenom << " " << z.note;
    return os;
}

double ZZ::get_note() const {
    return this->note;
}