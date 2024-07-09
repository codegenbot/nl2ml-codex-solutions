#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 3.8, 4.2, 6.7};
    float odd_sum = double_the_difference(lst);
    assert(odd_sum == 29); // Check if the sum of squares is correct
    return 0;
}