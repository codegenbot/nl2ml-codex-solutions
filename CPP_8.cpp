#include <vector>
#include <cassert>

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a == b;
}

std::pair<int, int> sum_product(const std::pair<int, int>& numbers) {
    int sum = 0;
    int product = 1;
    
    sum += numbers.first + numbers.second;
    product *= numbers.first * numbers.second;
    
    return {sum, product};
}

int main() {
    assert(issame(sum_product({10, 10}), {10, 10}));
    return 0;
}