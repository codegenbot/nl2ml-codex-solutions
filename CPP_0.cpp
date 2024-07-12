```cpp
#include <vector>
#include <cmath>
#include <initializer_list>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a({1.0, 2.0, 3.9, 4.0, 5.0, 2.2});
    if (!has_close_elements(a, 0.1)) {
        std::cout << "No two elements are within 0.1 of each other." << std::endl;
    } else {
        std::cout << "At least one pair of elements is within 0.1 of each other." << std::endl;
    }
}