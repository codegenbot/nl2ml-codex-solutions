#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> eat(int number, int need, int remaining){
    int totalCarrots = number + need;
    int eatenCarrots = min(totalCarrots, remaining);
    int carrotsLeft = max(0, remaining - totalCarrots);
    return {eatenCarrots, carrotsLeft};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}