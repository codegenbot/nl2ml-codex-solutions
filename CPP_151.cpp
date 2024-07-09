#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
long long odd_sum = double_the_difference(lst);

int main() {
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}