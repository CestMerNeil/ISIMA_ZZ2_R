#include "Arene.hpp"

Arene::Arene(std::string nom, Dresseur hostDresseur, Badge badge) : nom(nom), hostDresseur(hostDresseur), badge(badge) {}

void Arene::Afficher() const {
    std::cout << "Arene: " << nom << std::endl;
    std::cout << "Host Dresseur: " << hostDresseur << std::endl;
    std::cout << "Badge: " << badge.nom << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Arene &a) {
    os << "Arene: " << a.nom << std::endl;
    os << "Host Dresseur: " << a.hostDresseur << std::endl;
    os << "Badge: " << a.badge.nom << std::endl;
    return os;
}

bool Arene::challenger(Dresseur& d) {
    std::cout << "Dresseur " << d.getNom() << " veut challenger Arene " << nom << std::endl;
    bool isWin = false;
    if(hostDresseur.battre(d)) {
        std::cout << "Dresseur " << d.getNom() << " a perdu Arene " << nom << std::endl;
        isWin = true;
    } else {
        std::cout << "Dresseur " << d.getNom() << " a battu contre Arene " << nom << std::endl;
        isWin = false;
        d.getBadge(badge);
    }
    return isWin;
}