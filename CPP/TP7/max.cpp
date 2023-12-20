#include <iostream>
#include <string>

const int& max(const int&a, const int & b) {
    return ((a > b) ? a : b );
}

int main(int argc, char **) {
    int a = 5;
    int b = 0;
    std::string s = "Hello";
    double d = 8.14;
    float f = 1314.8;
    std::cout << max(f, d) << std::endl;
    return 0;
}