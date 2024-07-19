#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        sum += std::ceil(num) * std::ceil(num);
    }
    return sum;
}

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
    return 0;
}