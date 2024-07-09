#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers);

bool issame(const vector<float>& a, const vector<float>& b);

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    for (float &num : numbers) {
        num = (num - min_num) / (max_num - min_num);
    }
    
    return numbers;
}

bool issame(const vector<float>& a, const vector<float>& b){
    return a == b;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    
    return 0;
}