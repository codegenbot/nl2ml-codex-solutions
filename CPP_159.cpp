#include <vector>
#include <algorithm>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int carrotsLeft = std::max(0, remaining - need);
    return {total, carrotsLeft};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), std::vector<int>{5, 0}));
    return 0;
}