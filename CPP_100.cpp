#include <iostream>
#include <vector>

std::vector<int> make_a_pile() {
    int n;
    std::cin >> n;
    
    std::vector<int> stones;
    stones.push_back(n);
    while (n % 2 == 0) {
        n += 2;
        stones.push_back(n);
    }
    return stones;
}