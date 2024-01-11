#include "Humanoide.hpp"

Humanoide::Humanoide(std::string nom, std::string type, Genre genre, int age, int ifixit) : Humain(nom, genre, age), Machine(type, ifixit) {}
