#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(std::abs(game[i] - guess[i]));
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b_) {
    return a == b_;
}

int main() {
    std::assert(issame(compare({1, 2, 3, 5}, {-1,2,3,4}), {2, 0, 0, 1}));
    std::assert(issame(compare({0, 0, 0}, {0, 0, 0}), {0, 0, 0}));
    
    return 0;
}