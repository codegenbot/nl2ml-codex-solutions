#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

// Define any missing functions, e.g., factorize

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    
    return 0;
}