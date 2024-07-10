#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    if (numbers.size() <= 1)
        return {{}}; // or throw an exception
    
    pair<float, float> closest = {numbers[0], numbers[0]};
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[j] - numbers[i]) < abs(closest.second - closest.first)) {
                closest = {numbers[i], numbers[j]};
            }
        }
    }
    
    return {{closest.first, closest.second}};
}