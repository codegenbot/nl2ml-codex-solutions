#include <vector>
#include <cassert>

std::vector<int> generate_integers(int n, int val) {
    return {};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}