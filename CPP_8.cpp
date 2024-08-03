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
    std::vector<int> result = {sum, product};
    return result;
}

bool issame(std::vector<int>& a, std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));

    return 0;
}