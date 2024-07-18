#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int carrotsLeft = std::max(0, remaining - need);
    return {totalCarrots, carrotsLeft};
}