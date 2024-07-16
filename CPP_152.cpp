#include <cassert>
#include <vector>
#include <cmath>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    assert(issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    return 0;
}