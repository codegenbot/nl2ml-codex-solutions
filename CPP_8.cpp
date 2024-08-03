#include <vector>
#include <cassert>
#include <utility>

std::pair<int, int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b){
    return a.first == b.first && a.second == b.second;
}

assert(issame(sum_product({10}), {10, 10}));