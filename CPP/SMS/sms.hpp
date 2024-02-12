#ifndef __SMS
#define __SMS

#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <exception>
#include <iostream>

class Reseau;
class MMS;

class Telephone {
    private:
    std::string numero;
    Reseau* reseau;
    int nbMsg;

    public:
    Telephone();
    Telephone(std::string);
    Telephone(std::string, Reseau*);

    ~Telephone() = default;

    std::string getNumero() const { return numero; }
    void setNumero(std::string num) { this->numero = num; }
    std::string toString() const { return numero; }
    Reseau* getReseau() const { return reseau; }
    int getNbMessages() const { return nbMsg; }

    void textoter(std::string, std::string);
    void mmser(std::string, MMS*);

    bool operator <(const Telephone& t);

};

class Reseau {
    private:
    std::vector<Telephone> list;

    public:
    Reseau() {}
    ~Reseau() = default;
    void ajouter(std::string);
    std::string lister();
    Telephone& trouveTel(const std::string&);

};

class MauvaisNumero : public std::exception {
    public:
    const char* what() const noexcept override {
        return "mauvais numero";
    }
};

/*
class MauvaisNumero : public std::exception {
private:
    std::invalid_argument invalidArg;

public:
    // 构造函数接受一个 std::invalid_argument 异常
    MauvaisNumero(const std::invalid_argument& arg)
        : invalidArg(arg) {}
    MauvaisNumero() : invalidArg("Wrong") {}
    // 覆盖 what() 函数
    const char* what() const noexcept override {
        return "mauvais numero";
    }

    // 提供一个函数来获取内部的 std::invalid_argument 异常
    const std::invalid_argument& getInvalidArgument() const {
        return invalidArg;
    }
};
*/
class Message {
    private:
    static int nextId;
    int id;
    std::string text;
    public:
    Message() : id(nextId++) {}
    virtual ~Message() = default;
    virtual void setTexte(std::string)=0;
    static int getCle() { return nextId; }
    int getId() const { return id; }
    virtual std::string afficher() const {
        return text;
    }
};

class SMS : public Message {
    private:
    std::string exp;
    std::string des;
    std::string date;
    std::string text;
    public:
    SMS(std::string, std::string, std::string);
    virtual ~SMS() = default;
    void setTexte(std::string) override;
    std::string getTexte() const;
    virtual std::string afficher() const;

    void setExp(std::string str) {
        this->exp = str;
    }
    void setDes(std::string str) {
        this->des = str;
    }

    std::string getDe() { return exp; }
    std::string getA() { return des; }
};

class Media {
    protected:
    std::string index;
    public:
    Media(std::string);
    virtual ~Media() = default;
    virtual std::string afficher() const =0;
};

class Image : public Media {
    public:
    Image();
    ~Image() = default;
    Image(std::string std) : Media(std) {}
    std::string afficher() const override {
        return index;
    }
};
class Son : public Media {
    public:
    Son();
    ~Son() = default;
    Son(std::string std) : Media(std) {}
    std::string afficher() const override {
        return "[[son]]";
    }
};
class Video : public Media {
    public:
    Video();
    ~Video() = default;
    Video(std::string std) : Media(std) {}
    std::string afficher() const override {
        return "[[video]]";
    }
};

class MMS : public SMS {
    private:
    std::vector<Media*> list;
    public:
    MMS(std::string exp, std::string des, std::string date) : SMS(exp, des, date) {}
    ~MMS() {
        for (Media* media : list) {
            delete media;
        }
    }
    std::string afficher() const override{
        std::string res = getTexte();
        for (const Media* media : list) {
            res += media->afficher();
        }
        return res;
    }
    void joindre(Media* m) {
        list.push_back(m);
    }
};

#endif