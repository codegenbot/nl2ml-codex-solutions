```cpp
#include <vector>
#include <cmath>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else if (std::abs(game[i] - guess[i]) <= 2) {
            result.push_back(std::abs(game[i] - guess[i]));
        } else {
            result.push_back(-1);
        }
    }
    return result;
}

int main() {
    assert(isSame({1,2,3,5},{-1,2,3,4}) && compare({1,2,3,5},{-1,2,3,4}) == (std::vector<int>{2,0,0,1}));
}