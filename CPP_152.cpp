#include <vector>
#include <cassert>
#include <cmath>
#include <algorithm>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(std::abs(game[i] - guess[i]));
    }
    return result;
}

assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), std::vector<int>{2, 0, 0, 1}));
return 0;