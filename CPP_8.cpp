#include <vector>
#include <cassert>

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame_pairs(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    assert(issame_pairs(sum_product({10}), {10, 10}));
    return 0;
}