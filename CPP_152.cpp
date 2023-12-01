#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> compare(vector<int> game, vector<int> guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    vector<int> result = compare({1,2,3,5},{-1,2,3,4});
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}