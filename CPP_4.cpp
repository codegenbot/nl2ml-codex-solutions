#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0.0;
    float mean = 0.0;

    // Calculate the mean of the input vector
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    // Calculate the Mean Absolute Deviation
    sum = 0.0;
    for (float num : numbers) {
        sum += std::abs(num - mean);
    }

    return sum / numbers.size();
}