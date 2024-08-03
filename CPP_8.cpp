#include <vector>
#include <iostream>
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

bool issame(const auto& a, const auto& b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));

    return 0;
}