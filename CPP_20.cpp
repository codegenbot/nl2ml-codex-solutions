#include <vector>

using namespace std;

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < abs(min_diff)) {
                min_diff = diff;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }
    
    return vector<pair<float, float>>({closest_pair.first, closest_pair.second});
}