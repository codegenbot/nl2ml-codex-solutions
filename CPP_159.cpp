#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> eat(int x, int y, int z) {
    return {x + y, z};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 1}));
    return 0;
}