#include <vector>
#include <cassert>
using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current_stones = n;
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
    vector<int> expected_pile{8, 10, 12, 14, 16, 18, 20, 22};
    assert(issame(make_a_pile(8), expected_pile));
    return 0;
}