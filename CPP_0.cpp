#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); ++i) {
        if (std::abs(numbers[i] - numbers[i - 1]) < threshold)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements(a, 1.1) == true);
    
    return 0;
}