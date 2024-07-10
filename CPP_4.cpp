#include <vector>
#include <cmath>

using namespace std;

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += abs(num - accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size());
    }
    return sum / numbers.size();
}