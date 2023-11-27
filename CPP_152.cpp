#include <vector>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        if(game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    compare({1,2,3,5},{-1,2,3,4});
    return 0;
}