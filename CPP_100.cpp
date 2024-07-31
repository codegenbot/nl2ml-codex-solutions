#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> make_a_pile(int n){
    vector<int> stones;
    stones.push_back(n);
    for(int i = 1; i < n; ++i){
        if(n % 2 == 0)
            n += 2;
        else
            n += 1;
        stones.push_back(n);
    }
    return stones;
}

int main() {
    vector<int> expected = {8, 10, 12, 14, 16, 18, 20, 22};
    assert(issame(make_a_pile(8), expected));
    return 0;
}