#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

class Chaine  {
private:
    char* tab;
    unsigned int taille;
public:
    Chaine();
    Chaine(const int);
    Chaine(const char* s);
    Chaine(const Chaine& s);
    int getCapacite() const;
    char* c_str() const;

    void afficher() const;
    void afficher(std::ostream& os) const;
    void operator=(const Chaine& s);
    //void operator<<(const Chaine& s);
    //void operator<<(const char* s);
    friend std::ostream& operator<<(std::ostream& os, const Chaine& s);

    char& operator[](const int i);
    char operator[](const int i) const;

    class OutOfRangeException : public std::out_of_range {
    public:
        OutOfRangeException() : std::out_of_range("Out of range") {};
        OutOfRangeException(const std::string& message) : std::out_of_range(message) {};
    };
};

class null_pointer : public std::logic_error {
    public:
        null_pointer() : std::logic_error("Null pointer") {};
        null_pointer(const std::string& message) : std::logic_error(message) {};
};

#endif
