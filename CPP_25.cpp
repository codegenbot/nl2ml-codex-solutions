#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> factorize(int n){
    std::vector<int> factors;
    for(int i=2; i<=n; i++){
        while(n%i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
}