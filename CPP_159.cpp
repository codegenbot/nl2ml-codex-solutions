#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int total_eaten = number + need;
    int carrots_left = std::max(0, remaining - need);
    return {total_eaten, carrots_left};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}