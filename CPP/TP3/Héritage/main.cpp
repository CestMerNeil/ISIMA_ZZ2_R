#include <iostream>

class Mere {
    private:
    static int num;
    std::string Name;

    public:
    Mere(std::string s) : Name(s){
        num += 1;
        std::cout << "Bonjour~ Mere" << std::endl;
    }
    ~Mere() {
        std::cout << "BYE~ Mere" << std::endl;
    }
    int getComputer() { return num; }
    std::string getName() const { return Name; }
    virtual void affiche() const { std::cout << Name << " de la classe MERE!" << std::endl; }
};

class Fille : public Mere {
    public:
    Fille(std::string nom) : Mere(nom) {
        std::cout << "Bonjour~ Fille" << std::endl;
    }
    ~Fille() {
        std::cout << "BYE~ Fille" << std::endl;
    }
    void affiche() const { std::cout << getName() << " de la classe FILLE!" << std::endl; }

};

int Mere::num = 0;

int main(int, char **) {

    Fille f1("TUTU");

    Mere m1("TOTO");

    std::cout << f1.getName() << std::endl;
    std::cout << m1.getName() << std::endl;
    std::cout << m1.getComputer() << std::endl;
    std::cout << f1.getComputer() << std::endl;

    Mere *pm = new Mere("mere_dyn");
    Fille *pf = new Fille("fille_dyn");
    Mere *pp = new Fille("fille vue comme mere");
    pm->affiche();
    pf->affiche();
    pp->affiche();

    delete pm;
    delete pf;
    //delete pp;

    return 0;
}