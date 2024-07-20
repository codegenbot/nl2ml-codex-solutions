#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result = l;
    for (int i = 0; i < l.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            std::sort(result.begin() + i - 2, result.begin() + i + 1);
        }
    }
    return result;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    std::cout << "Test passed\n";
    return 0;
}