#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    return {totalEaten, carrotsLeft};
}

int main() {
    std::vector<int> result = eat(4, 5, 1);
    assert(issame(result, std::vector<int>{5, 0}));
    return 0;
}