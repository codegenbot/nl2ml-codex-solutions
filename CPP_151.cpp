#include <vector>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += num * num;
        }
    }
    return odd_sum;
}