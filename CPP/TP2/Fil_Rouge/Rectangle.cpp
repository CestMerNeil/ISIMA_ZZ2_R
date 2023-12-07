#include "Rectangle.hpp"

// definition de la classe Rectangle

Rectangle::Rectangle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

// Getters of Rectangle
int Rectangle::getX() { return x; }
int Rectangle::getY() { return y; }
int Rectangle::getW() { return w; }
int Rectangle::getH() { return h; }

// Setters of Rectangle
void Rectangle::setX(int x) { this->x = x; }
void Rectangle::setY(int y) { this->y = y; }
void Rectangle::setW(int w) { this->w = w; }
void Rectangle::setH(int h) { this->h = h; }

std::string Rectangle::toString() {
    return "Rectangle(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(w) + ", " +
           std::to_string(h) + ")";
}

