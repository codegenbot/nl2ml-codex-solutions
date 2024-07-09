#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(std::vector<int>{135, 103, 31}, std::vector<int>{31, 135}));
    return 0;
}