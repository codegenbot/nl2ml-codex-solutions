#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> piles;
    int stones = n;
    for (int i = 0; i < n; i++) {
        piles.push_back(stones);
        if (n % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
    }
    return piles;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}
