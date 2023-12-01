#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = numbers[0];
    float max_val = numbers[0];

    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] < min_val) {
            min_val = numbers[i];
        }
        if (numbers[i] > max_val) {
            max_val = numbers[i];
        }
    }

    for (int i = 0; i < numbers.size(); i++) {
        numbers[i] = (numbers[i] - min_val) / (max_val - min_val);
    }

    return numbers;
}