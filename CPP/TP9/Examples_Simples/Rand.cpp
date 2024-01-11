#include <cstdlib>
#include <iostream>
#include <ctime>
#include <random>
#include <iterator>
#include <algorithm>
#include <functional>

#include <vector>

struct Random {
    Random(int min, int max) : min(min), max(max) {}
    int operator() () const {
        return min + std::rand() % (max - min + 1);
    }
    friend std::ostream& operator<<(std::ostream& os, const Random& r){
        return os << r();
    }
private:
    int min;
    int max;
};

int main() {
    // while(1){
    //     std::srand(std::time(nullptr));
    //     std::cout << "Random value on [0 " << ", 100" << "]: "
    //             << Random(0, 100) << '\n' << std::endl;
    // }

    std::vector<int> v(10);
    std::srand(std::time(nullptr));
    Random r(0, 100);     
    std::generate(v.begin(), v.end(), r);
    for (auto i : v) {
        std::cout << i << ' ';
    }

    std::cout << std::endl;
    std::generate_n(v.begin(), 10, r);
    for (auto i : v) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    std::vector<int>::iterator it_min = std::min_element(v.begin(), v.end());
    std::cout << "Min: " << *it_min << std::endl;

    std::vector<int>::iterator it_max = std::max_element(v.begin(), v.end());
    std::cout << "Max: " << *it_max << std::endl;
    
    return 0;
} 