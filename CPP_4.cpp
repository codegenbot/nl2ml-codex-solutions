#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

float mean_absolute_deviation(const std::vector<float> &numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float mad_sum = 0.0;
    for (float num : numbers) {
        mad_sum += fabs(num - mean);
    }
    
    return mad_sum / numbers.size();
}

int main() {
    assert(fabs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0 / 5.0) < 1e-4);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}