```cpp
#include <iostream>
#include <vector>
#include <limits>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

struct Pair {
    float first, second;
};

Pair find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float minDiff = std::numeric_limits<float>::max();
    Pair closestPair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            closestPair.first = numbers[i];
            closestPair.second = numbers[i + 1];
        }
    }
    
    return closestPair;
}

int main() {
    std::vector<float> numbers = {1.1f, 2.2f, 3.1f, 4.1f, 5.1f};
    assert(issame({numbers[0], numbers.back()}, {find_closest_elements(numbers).first, find_closest_elements(numbers).second}));
    return 0;
}