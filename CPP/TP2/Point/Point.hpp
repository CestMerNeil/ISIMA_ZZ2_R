#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point {
    private:
    double x;
    double y;
    

    public:
    static int count;
    Point();
    Point(double, double);
    double getX();
    double getY();
    void setX(double);
    void setY(double);
    void deplacerDe();
    void deplacerVers();
    void afficher();
};

#endif