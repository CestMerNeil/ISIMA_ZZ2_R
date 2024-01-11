#ifndef HUMAIN_HPP
#define HUMAIN_HPP

#include <iostream>
#include <string>

enum Genre {
	HOMME,
	FEMME
};

class Humain {
	private:
		std::string nom;
		Genre genre;
		int age;
	public:
		Humain(std::string, Genre, int);
		
		// Getters
		std::string getNom() const { return nom; }
		Genre getGenre() const { return genre; }
		int getAge() const { return age; }

		// Setters
		void setNom(std::string nom) { this->nom = nom; }
		void setGenre(Genre genre) { this->genre = genre; }
		void setAge(int age) { this->age = age; }
};

#endif
