#include <vector>
#include <iostream>

int main(void) {
    std::vector<int> v = std::vector<int>();
    v.push_back(17);
    v.push_back(12);
    v.push_back(23);
    v.push_back(42);
    v.push_back(45);
    for ( auto &i : v ) {
        std::cout << i << std::endl;
    }
    return 0;
}