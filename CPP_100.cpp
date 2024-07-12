#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);

    while (n % 2 == 0) {
        n += 2;
        stones.push_back(n);
    }

    return stones;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
    // Additional test cases can be added here

    return 0;
}