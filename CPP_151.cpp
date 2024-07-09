#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for(const float& num : lst) {
        if (num > 0 && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(num * num);
        }
    }
    return sum;
}

std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
long long odd_sum = double_the_difference(lst);

int main() {
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}