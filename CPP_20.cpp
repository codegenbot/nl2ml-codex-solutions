#include <algorithm>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) {
        throw invalid_argument("Input vector must have at least two elements");
    }

    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair.first = numbers[i];
            closest_pair.second = numbers[i + 1];
        }
    }

    return vector<float>{closest_pair.first, closest_pair.second};
}