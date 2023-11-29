#include <iostream>
#include "Point.hpp"

int Point::count = 0;

Point::Point(double x, double y) {
    this-> x = x;
    this-> y = y;
    count++;
}

Point::Point() {
    Point(0, 0);
    //count++;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

void Point::setX(double x) {
    this-> x = x;
}

void Point::setY(double y) {
    this-> y = y;
}

