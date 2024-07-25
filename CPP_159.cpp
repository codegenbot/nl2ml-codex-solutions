#include <vector>

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + remaining;
    int carrotsLeft = max(0, remaining - (need - number));
    return {totalEaten, carrotsLeft};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}