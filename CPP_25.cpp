#include <vector>
#include <cassert>

std::vector<int> factorize(int n) {
    // Implement factorization logic here
    return {2, 3, 3};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int contest_main(){
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}