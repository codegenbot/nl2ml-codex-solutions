```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 2.0f, 3.25f, -4.5f, 5.0f};
    long long odd_sum = double_the_difference(lst);
    for (float num : lst) {
        if (num > 0) {
            std::cout << "The square of the number is: " << num * num << std::endl;
        }
    }
    return 0;
}