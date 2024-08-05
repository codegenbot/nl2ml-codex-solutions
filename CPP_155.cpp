#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}

std::vector<int> even_odd_count(int n) {
    return {n % 2, n % 2 == 0 ? 1 : 0};
}

int main() {
    assert(issame(even_odd_count(0), std::vector<int>{1, 0}));
    
    return 0;
}