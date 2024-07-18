#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) {
    return sum_product(a) == sum_product(b);
}

std::pair<int, int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return std::make_pair(sum, product);
}