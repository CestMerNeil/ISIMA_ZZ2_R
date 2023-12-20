#include <iostream>
#include <string>

template <typename T>
const T& Max(const T& a, const T& b) {
    return ((a > b) ? a : b );
}

int main(int argc, char **) {

    int a = 5;
    int b = 0;

    double d = 8.14;
    double f = 1314.8;

    std::string s1 = "Hello";
    std::string s2 = "World";

    std::cout << Max(a, b) << std::endl;
    std::cout << Max(s1, s2) << std::endl;
    std::cout << Max(f, d) << std::endl;

    return 0;
}
