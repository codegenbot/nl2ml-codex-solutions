#include <vector>
#include <cassert>

namespace A {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }
}

std::vector<int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;

    for (int num : numbers) {
        sum += num;
        product *= num;
    }

    return {sum, product};
}

int main() {
    assert(A::issame(sum_product({10}), {10, 1}));
    return 0;
}