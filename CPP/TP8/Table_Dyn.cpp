#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>

int main(int, char **) {
    std::vector<int> v;
    int input;

    // while(std::cin >> input)
    //     v.push_back(input);
    
    while(std::cin >> input) {
        if (input == 0)
            break;
        v.push_back(input);
    }

    std::sort(v.begin(), v.end());

    // std::copy(v.begin(), v.end(), std::ostream_iterator<int> (std::cout, "\n"));
    
    for (int& i : v) {
        std::cout << i << std::endl;
    }

    return 0;

}