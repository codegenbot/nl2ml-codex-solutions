```cpp
#include <vector>
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
    std::vector<float> lst = {1.5, 2.3, 4.7};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 12); // Your assertion statement...
    return 0;
}