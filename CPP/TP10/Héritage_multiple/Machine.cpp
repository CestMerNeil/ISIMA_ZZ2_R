#include "Machine.hpp"

Machine::Machine(std::string type, int autonomie, int ifixit) : type(type), autonomie(autonomie), ifixit(ifixit) {}

Machine::Machine(std::string type, int ifixit) : type(type), ifixit(ifixit) {}
