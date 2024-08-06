#include <iostream>
#include <algorithm>
#include <vector>

bool issame(std::pair<float, float> a, std::pair<float, float> b);

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for(int i = 1; i < numbers.size() - 1; ++i){
        if(numbers[i+1] - numbers[i] < min_diff){
            min_diff = numbers[i+1] - numbers[i];
            closest_elements = {numbers[i], numbers[i+1]};
        }
    }
    return closest_elements;
}