#include <vector>
#include <iostream>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess);

int main() {
    // Main function code here
    return 0;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}