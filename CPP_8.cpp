#include <vector>
#include <cassert>
#include <utility>

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return (a.first == b.first) && (a.second == b.second);
}

int main() {
    assert(issame(sum_product({10}), std::make_pair(10, 10)));
    
    return 0;
}