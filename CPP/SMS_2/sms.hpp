#ifndef __SMS
#define __SMS

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Reseau;
class MMS;

class MauvaisNumero : public std::exception {
    public:
    const char* what() const noexcept override {
        return "mauvais numero";
    }
};

class Telephone {
    protected:
    std::string numero;
    Reseau* reseau;
    int nbMessages;
    public:
    Telephone() : numero(""), reseau(nullptr), nbMessages(0) {}
    Telephone(std::string str) : numero(str) {}
    Telephone(std::string str, Reseau* r) : numero(str), reseau(r) {} 
    ~Telephone() = default;
    std::string getNumero() const { return numero; }
    void setNumero(std::string str) { this->numero = str; }
    bool operator<(const Telephone& t) const {
        return numero<t.numero;
    }
    void addMessage() { nbMessages++; }
    Reseau* getReseau() const { return reseau; }
    int getNbMessages() const { return nbMessages; }
    void textoter(std::string dest, std::string text);
    void mmser(std::string dest, MMS* mms);
}; 


class Reseau {
    protected:
    std::vector<Telephone*> list;
    public:
    ~Reseau() {
        for(auto& i : list) {
            delete i;
        }
    }
    std::string lister() const {
        std::string res;
        for( const auto& i : list ){
            res += i->getNumero();
            res += '\n';
        }
        return res;
    }
    void ajouter(std::string str){
        list.push_back(new Telephone(str, this));
        sort(list.begin(), list.end(), [](const Telephone* a, const Telephone* b) {
            return *a < *b;
        });
    }
    Telephone& trouveTel(std::string str) {
        for(const auto& i : list) {
            if (i->getNumero() == str) {
                return *i;
            }
        }
        //throw std::invalid_argument(str);
        throw MauvaisNumero();
    }
};

class Message {
    protected:
    std::string exp;
    std::string dest;
    std::string date;
    std::string texte;
    int id;
    public:
    static int cle;
    static int getCle() { return cle; }
    virtual ~Message() = default;
    Message(std::string exp, std::string dest, std::string date) : exp(exp), dest(dest), date(date), id(cle) {
        cle ++;
    }
    Message(std::string texte) : texte(texte) {}
    virtual void setTexte(const std::string& str) { this->texte = str; }
    virtual std::string afficher() const { return texte; }
    std::string getTexte() const { return texte; }
    int getId() const { return id; }  
    virtual int hello() const =0;
    void setExp(std::string str) { this->exp = str; }
    void setDest(std::string str) { this->dest = str; }  
};

class SMS : public Message{
    protected:

    public:
    SMS(std::string exp, std::string dest, std::string date) : Message(exp, dest, date) {}
    SMS(std::string texte) : Message(texte) {}
    int hello() const override { return 0; } 
};

class Media {
    protected:
    std::string index;
    public:
    Media() {}
    Media(std::string str) : index(str) {}
    virtual ~Media() = default;
    virtual std::string afficher() const { return index; }
};

class Image : public Media {
    public:
    Image() : Media("[[image]]") {}
    ~Image() = default;
    std::string afficher() const override { return index; }
};

class Son : public Media {
    public:
    Son() : Media("[[son]]") {}
    ~Son() = default;
    std::string afficher() const override { return index; }
};

class Video : public Media {
    public:
    Video() : Media("[[video]]") {}
    ~Video() = default;
    std::string afficher() const override { return index; }
};

class MMS : public SMS {
    public:
    MMS(std::string exp, std::string dest, std::string date) : SMS(exp, dest, date) {}
    ~MMS() = default;
    int hello() const override { return 0; } 
    void joindre(Media* media) { this->texte += media->afficher(); }
    void setTexte(const std::string& str) override {
        this->texte = str + this->texte;
    }
    std::string getDe() const { return exp; } 
    std::string getA() const { return dest; }

};
#endif