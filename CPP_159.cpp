#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + std::min(need, remaining);
    int remainingCarrots = std::max(0, remaining - need);
    return { totalEatenCarrots, remainingCarrots };
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}