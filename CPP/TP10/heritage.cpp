#include <iostream>

class Mere {
	public:
		Mere() {
			tab = new int[100];
		}
		~Mere() {
			delete [] tab;
		}
	protected:
		int * tab;
};

class Fille : public Mere {
	public:
		Fille() {
			tab = new double[100];
		}
		~Fille() {
			delete [] tab;
		}
	protected:
		double * tab;
};

int main(int, char**) {
	Mere * m = new Fille();

	std::cout << "penser a valgrind" << std::endl;
	delete m;

	return 0;
}
