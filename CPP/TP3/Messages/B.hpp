#ifndef B_HPP
#define B_HPP

#include <iostream>

class A;

class B
{
public:
    int j;
    void send(A* a);
    void exec(int value);
};
#endif