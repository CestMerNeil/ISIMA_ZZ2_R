#include "Bavarde.hpp"

int Bavarde::s_count = 0;

Bavarde::Bavarde() : m_id(s_count++) { std::cout << "Constructeur " << m_id << std::endl; }

Bavarde::Bavarde(int id) : m_id(id) { std::cout << "Constructeur " << m_id << std::endl; }

Bavarde::~Bavarde() { std::cout << "Destructeur " << m_id << std::endl; }

void Bavarde::afficher() { std::cout << "Je suis l'objet " << m_id << std::endl; }

void Bavarde::fonction(Bavarde b) { std::cout << "Appel de fonction" << std::endl; }