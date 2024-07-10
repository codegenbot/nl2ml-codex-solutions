#include <vector>
#include <cassert>

std::vector<int> factorize(int n){
    std::vector<int> factors;
    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

int main() {
    assert(factorize(3 * 2 * 3) == std::vector<int>({2, 3, 3}));
}