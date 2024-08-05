#include <iostream>
#include <vector>
#include <cassert>

namespace std {
    std::vector<int> tri(int n) {
        return {n, n + 2};
    }

    bool issame(std::vector<int> a, std::vector<int> b) {
        if (a.size() != b.size()) return false;
        for (size_t i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }
}

int main() {
    assert(std::issame(std::tri(1), {1, 3}));
    
    return 0;
}