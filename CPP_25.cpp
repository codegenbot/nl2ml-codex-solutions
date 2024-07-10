#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> factorize(int num) {
    std::vector<int> factors;
    for (int i = 2; i <= num; ++i) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }
    return factors;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), std::vector<int>{2, 3, 3}));

    return 0;
}