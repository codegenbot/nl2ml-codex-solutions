#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {3.0, 4.0, 5.0};
    int odd_sum = 25;
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}