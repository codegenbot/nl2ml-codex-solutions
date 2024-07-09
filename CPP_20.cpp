#include <algorithm>
#include <limits>
#include <vector>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = std::numeric_limits<float>::max();
    std::vector<float> closest_pair;
    
    for(int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if(diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return closest_pair;
}

assert(std::equal(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), std::vector<float>{2.2, 3.1}));