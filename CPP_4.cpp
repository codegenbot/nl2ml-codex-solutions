#include <vector>
#include <cmath>
#include <cassert>
#include <iostream>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0.0;
    for(float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float mad_sum = 0.0;
    for(float num : numbers) {
        mad_sum += std::fabs(num - mean);
    }
    
    return mad_sum / numbers.size();
}

int main() {
    std::vector<float> numbers;
    float input;
    while (std::cin >> input) {
        numbers.push_back(input);
    }
    
    std::cout << mean_absolute_deviation(numbers) << std::endl;
    return 0;
}