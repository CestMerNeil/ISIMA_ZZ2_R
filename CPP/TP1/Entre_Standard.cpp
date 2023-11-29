#include <iostream>
#include <string>

int main(int, char **) {
    std::string s;
    int longeur;

    std::cout << "Quel est votre prénom ? " << std::endl;
    std::cin >> s;
    std::cout << "Quel est votre âge ? " << std::endl;
    // std::cin >> age;
    // std::cout << "Bonjour " << s << ", vous avez " << age << " ans." << std::endl;

    longeur = s.length();

    return 0;
}