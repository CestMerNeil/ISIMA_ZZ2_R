#include <iostream>
#include "Point.cpp"

int main(int, char **) {
    Point p1(1, 2);
    std::cout << Point::count << std::endl;
    Point p2;
    std::cout << Point::count << std::endl;
}