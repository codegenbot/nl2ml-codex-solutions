#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> l_copy = l;
    for (size_t i = 0; i < l.size(); i++) {
        if ((i + 1) % 3 == 0) {
            std::sort(l_copy.begin() + i - 2, l_copy.begin() + i + 1);
        }
    }
    return l_copy;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), std::vector<int>{2, 6, 3, 4, 8, 9, 5, 1}));
    
    return 0;
}