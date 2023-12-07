#include<iostream>

#include "Cercle.hpp"
#include "Rectangle.hpp"

int main(int, char **) {

    std::cout << "Bienvenue dans ce fil rouge" << std::endl;

    Cercle c(10, 10, 30, 30);
    Rectangle r(30, 30, 15, 15);

    std::cout << c.toString() << std::endl;
    std::cout << r.toString() << std::endl;

    return 0;
}