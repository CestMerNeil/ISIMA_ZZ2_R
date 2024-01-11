#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string> to_upper(std::vector<std::string> s) {
    std::for_each(s.begin(), s.end(), [](std::string s) {
        std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    });

    return s;
}

int mian(int, char**) {
    std::vector<std::string> v = {"Hello", "World", "!"};
    to_upper(v);
    for (auto i : v) {
        std::cout << i << std::endl;
    }

    return 0;
}