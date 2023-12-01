#include <vector>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess);

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for(int i=0; i<game.size(); i++) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    assert(issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    return 0;
}