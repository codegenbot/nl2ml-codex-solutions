#include <vector>
#include <algorithm>
#include <cassert>

void remove_duplicates(std::vector<int>& vec) {
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    remove_duplicates(input);
    assert(issame(input, std::vector<int>{1, 4, 5}));
    
    return 0;
}