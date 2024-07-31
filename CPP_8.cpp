#include <vector>

std::pair<int, int> sumProduct(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

auto sum_product = sumProduct({10});

assert(issame(sumProduct({10}), {10, 10}));