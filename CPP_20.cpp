#include <algorithm>
#include <numeric>
#include <limits>

using namespace std;

bool issame(float a, float b) {
    return abs(a - b) <= numeric_limits<float>::epsilon();
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (issame(numbers[i], numbers[i + 1])) {
            continue;
        }
        
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return vector<float>(closest_pair.begin(), closest_pair.end());
}