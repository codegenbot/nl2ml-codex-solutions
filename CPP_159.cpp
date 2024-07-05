#include <iostream>
#include <vector>
#include <algorithm> // for min and max
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + min(need, remaining);
    int carrotsLeft = max(0, remaining - need);
    return { totalEaten, carrotsLeft };
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    cout << "All tests passed!" << endl;
    return 0;
}