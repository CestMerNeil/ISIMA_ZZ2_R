//#include <iostream>
#include "Point.hpp"

int Point::count = 0;

/*
Point::Point(double x, double y) {
    this-> x = x;
    this-> y = y;
    count++;
}
*/

// La liste de constructeur
Point::Point(double x, double y) : x(x), y(y) { count++; }

Point::Point() { Point(0, 0); }

double Point::getX() { return x; }

double Point::getY() { return y; }

void Point::setX(double x = 0) { this-> x = x; }

void Point::setY(double y = 0) { this-> y = y; }

void Point::deplacerDe() {
    double x, y;
    std::cout << "Deplacer de x: ";
    std::cin >> x;
    std::cout << "Deplacer de y: ";
    std::cin >> y;
    this-> x += x;
    this-> y += y;
}

void Point::deplacerVers() {
    double x, y;
    std::cout << "Deplacer vers x: ";
    std::cin >> x;
    std::cout << "Deplacer vers y: ";
    std::cin >> y;
    this-> x = x;
    this-> y = y;
}

void Point::afficher() {
    //std::cout << "Point: " <<std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}