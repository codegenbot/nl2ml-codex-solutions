#include <vector>
#include <cmath>
#include <cassert>
#include <iostream>

long double double_the_difference(std::vector<float> lst) {
    long double sum = 0;

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == std::floor(lst[i]) && (int)lst[i] % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }

    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.3, 3.8, 4.0, 5.5};
    long double odd_sum = 30.25;

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}