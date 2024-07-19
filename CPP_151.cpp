#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && ((int)num) % 2 != 0) {
            sum += (long long)std::pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.0, -4.5, 5.0};
    long long odd_sum = 25; 
    assert(double_the_difference(lst) == odd_sum);

    return 0;
}