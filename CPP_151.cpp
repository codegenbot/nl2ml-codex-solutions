#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += static_cast<long long>(num * num);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    while (std::cin >> num) {
        lst.push_back(num);
    }

    long long odd_sum = double_the_difference(lst);

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}