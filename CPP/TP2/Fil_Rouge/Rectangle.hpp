// GARDIEN

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <string>

class Rectangle {

private:
    int x;
    int y;
    int w;
    int h;

public:
    Rectangle(int x, int y, int w, int h);
    int getX();
    int getY();
    int getW();
    int getH();
    void setX(int x);
    void setY(int y);
    void setW(int w);
    void setH(int h);
    std::string toString();
};

#endif

// Declaration de la classe Rectangle