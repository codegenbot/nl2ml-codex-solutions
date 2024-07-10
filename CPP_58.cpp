#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size();
}

int main() {
    assert(issame(std::vector<int>{4, 3, 2, 8}, std::vector<int>{4, 3, 2, 8}));
    return 0;
}