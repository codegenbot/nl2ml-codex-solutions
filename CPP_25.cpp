#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int solve() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}

int main() {
    return solve();
}