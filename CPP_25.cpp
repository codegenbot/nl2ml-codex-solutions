#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> factorize(int num) {
    std::vector<int> factors;
    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }
    if (num > 1) {
        factors.push_back(num);
    }
    return factors;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}