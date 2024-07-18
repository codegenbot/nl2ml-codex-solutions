#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float sum_abs_diff = 0;
    for (float num : numbers) {
        sum_abs_diff += std::fabs(num - mean);
    }
    
    return sum_abs_diff / numbers.size();
}

int main() {
    assert(std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);

    return 0;
}