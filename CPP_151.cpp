#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)(num * num);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 3.0, 5.0, 7.0, 9.0};
    long long odd_sum = 165;
    assert(double_the_difference(lst) == odd_sum);
}