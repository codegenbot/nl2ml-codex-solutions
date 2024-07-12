#include <vector>
#include <algorithm>

namespace std {

    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }

    std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
        std::vector<int> result(game.size());
        std::transform(game.begin(), game.end(), guess.begin(), result.begin(),
                       [](int g, int gu) { return std::abs(g - gu); });
        return result;
    }
    
} // end of std namespace