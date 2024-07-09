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
    std::vector<float> testVec;
    for (int i = 0; i < 10; ++i) {
        testVec.push_back(i + 1.1f);
    }
    Pair closestPair = find_closest_elements(testVec);
    
    assert(issame({closestPair.first, closestPair.second}, {2.2f, 2.3f}));
}