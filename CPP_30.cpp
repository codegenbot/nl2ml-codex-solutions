```cpp
#include <vector>
#include <iostream>

bool areEqual(float a, float b) {
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l, std::vector<float> v = {}) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<float> v = {1, -2, 3};
    std::cout << "Only positive numbers are: ";
    for (float num : get_positive(v)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}