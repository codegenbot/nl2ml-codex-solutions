#include <vector>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

bool areEqual(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(areEqual(compare({1,2,3,5},{-1,2,3,4}), {2,0,0,1}));
    return 0;
}