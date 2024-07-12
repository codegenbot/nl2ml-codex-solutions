#include <vector>
#include <iostream>

bool areSame(std::vector<int> a, std::vector<int> b) {
    for(int i = 0; i < a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> getResult(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    if(areSame(game,guess)){
        for (int i = 0; i < game.size(); i++) {
            result.push_back(2);
        }
    } else {
        for (int i = 0; i < game.size(); i++) {
            if (game[i] == guess[i]) {
                result.push_back(1);
            } else {
                result.push_back(0);
            }
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> game(n),guess(n);
    for(int i = 0; i < n;i++){
        std::cin >> game[i] >> guess[i];
    }
    std::vector<int> res = getResult(game,guess);
    for(auto x:res)std::cout << x << " ";
    return 0;
}