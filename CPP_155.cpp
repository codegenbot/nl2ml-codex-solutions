#include <vector>
#include <string>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    return {n % 2 == 0, n % 2 == 1};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    
    return 0;
}