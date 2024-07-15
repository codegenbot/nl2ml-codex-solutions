#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());

    vector<float> rescaled;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled.push_back(rescaled_num);
    }

    return rescaled;
}

int main() {
    assert(std::equal(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}).begin(),
                      rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}).end(),
                      vector<float>{0.25, 0.0, 1.0, 0.5, 0.75}.begin()));

    return 0;
}