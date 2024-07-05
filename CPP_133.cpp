#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

int main() {
    auto sum_squares = [](const std::vector<float>& lst) {
        int sum = 0;
        for (float num : lst) {
            int ceil_num = std::ceil(num);
            sum += ceil_num * ceil_num;
        }
        return sum;
    };

    assert(sum_squares({-1, 1, 0}) == 2); // Testing the function
    std::cout << "All tests passed!" << std::endl;
    return 0;
}