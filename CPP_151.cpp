#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(std::vector<double> lst){
    long long odd_sum = 0;
    for (double num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long long)pow(num, 2);
        }
    }
    return odd_sum;
}