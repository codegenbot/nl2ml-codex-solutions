#include <algorithm>
#include <vector>
#include <cmath>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && all(a.begin(), a.end(), [&](float x) { 
        return std::find(b.begin(), b.end(), x) != b.end(); 
    });
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        return {{}};
    }
    
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[j] - numbers[i]) < abs(closest_pair.second - closest_pair.first)) {
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }
    
    std::vector<std::pair<float, float>> result;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[j] - numbers[i]) == abs(closest_pair.second - closest_pair.first)) {
                result.push_back({min(numbers[i], numbers[j]), max(numbers[i], numbers[j])});
            }
        }
    }
    
    return result;
}