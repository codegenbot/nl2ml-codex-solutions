#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }
    float mean = sum / numbers.size();
    float deviation = 0;
    for(int i = 0; i < numbers.size(); i++){
        deviation += abs(numbers[i] - mean);
    }
    return deviation / numbers.size();
}

int main() {
    assert(abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    return 0;
}