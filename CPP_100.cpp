#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        if (n % 2 == 0) {
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

void main() {
    std::vector<int> result = make_a_pile(5);

    std::vector<int> expected = {5, 6, 8, 10, 12};
    assert(issame(result, expected));
}