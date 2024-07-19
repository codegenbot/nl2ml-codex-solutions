#include <vector>
#include <cassert>

bool issame_vector(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame_vector({1, 2, 3}, {1, 2, 6}) == false);
    return 0;
}