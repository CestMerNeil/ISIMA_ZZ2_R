#ifndef A_HPP
#define A_HPP

class B;

#include <iostream>

class A
{
public:
    int i;
    void exec(int value);
    void send(B *b);
};
#endif