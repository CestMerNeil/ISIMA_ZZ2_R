#ifndef HUMAINOIDE_HPP
#define HUMAINOIDE_HPP

#include "human.hpp"
#include "Machine.hpp"

class Humanoide : public Humain, public Machine {
public:
	Humanoide(std::string, std::string, Genre, int, int);
};

#endif
