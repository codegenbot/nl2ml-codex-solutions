#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + std::min(need, remaining);
    int remainingCarrots = std::max(0, remaining - need);
    return { totalEatenCarrots, remainingCarrots };
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), std::vector<int>{5, 0}));
    return 0;
}