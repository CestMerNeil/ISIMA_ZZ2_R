#ifndef PILE_HPP
#define PILE_HPP

#include <iostream>

class Pile {
private:
    int *pile;
    int taille;
    int capacite;
public:
    Pile();
    Pile(int);
    ~Pile();
    bool empty();
    void push(int);
    int pop();
    int top();
    int size();
};

#endif // PILE_HPP