#include <iostream>
#include <vector>
#include <cassert>

double func_A(const std::vector<float>& nums, int index);
double func_B(const std::vector<float>& nums, int index);
double double_the_difference(double num1, double num2);

double func_A(const std::vector<float>& nums, int index) {
    return nums[index];
}

double func_B(const std::vector<float>& nums, int index) {
    return nums[index];
}

double double_the_difference(double num1, double num2) {
    return 2 * (num1 - num2);
}

int main() {
    std::vector<float> lst = {3.0, 2.0, 4.5, 1.0, 5.0};
    long long odd_sum = double_the_difference(func_A(lst, 2), func_B(lst, 3));
    assert(double_the_difference(func_A(lst, 2), func_B(lst, 3)) == odd_sum );
    
    return odd_sum;
}