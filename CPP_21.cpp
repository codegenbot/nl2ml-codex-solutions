#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());

    vector<float> result;
    for (float num : numbers) {
        float rescaled = (num - min_num) / (max_num - min_num);
        result.push_back(rescaled);
    }

    return result;
}