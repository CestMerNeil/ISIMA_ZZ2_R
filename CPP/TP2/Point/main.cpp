//#include <iostream>
#include "Point.hpp"

int main(int, char **) {
    Point p1(1, 2);
    std::cout << Point::count << std::endl;
    Point p2;
    std::cout << Point::count << std::endl;
    Point p3(3, 4);
    std::cout << p3.getX() << std::endl;
    p3.setX(5);
    std::cout << p3.getX() << std::endl;
    p3.afficher();
    p3.deplacerDe();
    p3.afficher();

    Point * p4 = new Point(6, 7);
    std::cout << p4->getX() << std::endl;
    
    return 0;
}