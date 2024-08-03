#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess){
    vector<int> result;
    for(size_t i = 0; i < game.size(); i++){
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main(){
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), vector<int>({2, 0, 0, 1})));
    return 0;
}