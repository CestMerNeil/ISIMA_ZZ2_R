#include "ZZ.hpp"

using Vzz = std::vector<ZZ>;
//std::vector<ZZ> vzz;
Vzz vzz;

std::ostream& operator<<(std::ostream& os, const ZZ& zz) {
    os << zz.nom << " " << zz.prenom << " " << zz.note;
    return os;
}

std::istream& operator>>(std::istream& is, ZZ& zz) {
    is >> zz.nom >> zz.prenom >> zz.note;
    return is;
}

ZZ::ZZ(std::string nom, std::string prenom, double note) : nom(nom), prenom(prenom), note(note) {
    vzz.push_back(*this);
}

bool operator<(const ZZ& zz1, const ZZ& zz2) { return zz1.note < zz2.note; }

int main(int, char**) {

    ZZ zz1("nom1", "prenom1", 100.0);
    ZZ zz2("nom2", "prenom2", 87.0);
    ZZ zz3("nom3", "prenom3", 50.0);
    ZZ zz4("Yonathan", "Zetune", 30.0);
    ZZ zz5("Numa", "Eason", 55.0);
    ZZ * zz6 = new ZZ("Nathan", "Zetune", 58.0);

    for(ZZ& i : vzz) {
        std::cout << i << std::endl;
    }

    std::cout << "vzz.size() = " << vzz.size() << std::endl;
    std::cout << "============================" << std::endl;

    for(Vzz::iterator it = vzz.begin(); it != vzz.end(); ++it) {
        std::cout << *it << std::endl;
    }

    std::cout << "============================" << std::endl;

    if(zz4<*zz6) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }

    std::cout << "============================" << std::endl;


    ZZ zz;

    std::cout << "请输入名字、姓氏和分数：";
    std::cin >> zz;

    std::cout << "输入的信息：" << std::endl;
    std::cout << "名字: " << zz.nom << std::endl;
    std::cout << "姓氏: " << zz.prenom << std::endl;
    std::cout << "分数: " << zz.note << std::endl;
    std::cout << zz << std::endl;

    std::cout << "============================" << std::endl;

    for(ZZ& i : vzz) {
        std::cout << i << std::endl;
    }

    std::cout << "vzz.size() = " << vzz.size() << std::endl;
    std::cout << "============================" << std::endl;

    for(Vzz::iterator it = vzz.begin(); it != vzz.end(); ++it) {
        std::cout << *it << std::endl;
    }

    std::cout << "============================" << std::endl;

    std::cout << zz << std::endl;




    return 0;
}