#include <vector>
#include <algorithm>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    vector<float> result;
    
    if (numbers.size() < 2) {
        return result; // or throw an exception, depending on your requirements
    }
    
    float minVal = *min_element(numbers.begin(), numbers.end());
    float maxVal = *max_element(numbers.begin(), numbers.end());
    
    for (float num : numbers) {
        result.push_back((num - minVal) / (maxVal - minVal));
    }
    
    return result;
}