#ifndef MACHINE_HPP
#define MACHINE_HPP

#include <iostream>
#include <string>

class Machine {
private:
	std::string type;
	int autonomie;
	int ifixit;
public:
	Machine(std::string, int, int);
	Machine(std::string, int);

	// Getters
	std::string getType() { return type; }
	int getAutonomie() { return autonomie; }
	int getIfixit() { return ifixit; }

	// Setters
};

#endif
