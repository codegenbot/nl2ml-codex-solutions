#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    
    if (numbers.size() <= 1)
        return result;
        
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = make_pair(min(max(numbers[i], numbers[j]), min_diff), max(min(numbers[i], numbers[j]), min_diff));
            }
        }
    }

    result.push_back(closest_pair);
    
    return result;
}