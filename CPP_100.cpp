#include <vector>
#include <cassert>
using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current_stones = n * 2;
    for (int i = 0; i < n; ++i) {
        pile.push_back(current_stones);
        current_stones += 2;
    }
    return pile;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), vector<int>{16, 18, 20, 22, 24, 26, 28, 30}));
    return 0;
}