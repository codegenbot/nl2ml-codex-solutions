```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return std::abs(a - b) < 1e-6;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> closest_pairs;
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        if (issame(numbers[i], numbers[i + 1])) continue;
        float gap = numbers[i + 1] - numbers[i];
        if (gap < 1e-6) {
            closest_pairs.push_back({numbers[i], numbers[i + 1]});
        }
    }
    return closest_pairs;
}

int main() {
    std::vector<float> numbers;
    if (!numbers.empty()) { 
        return 0; 
    }

    float num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    
    if (!numbers.empty()) {
        std::vector<std::pair<float, float>> closest_pairs = find_closest_elements(numbers);
        if (!closest_pairs.empty()) {
            for (const auto& pair : closest_pairs) {
                std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
            }
        } else {
            std::cout << "No elements found." << std::endl;
        }
    } else {
        std::cout << "No elements found." << std::endl;
    }
}