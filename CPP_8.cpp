
#include <vector>
#include <utility>
#include <assert.h>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

std::pair<int, int> sum_product(std::vector<int> nums) {
    int sum = 0;
    int product = 1;
    for (int num : nums) {
        sum += num;
        product *= num;
    }
    return std::make_pair(sum, product);
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}