#include <vector>
#include <cassert>

std::vector<int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
}