```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) {
        return result;
    }
    
    int minEven = INT_MAX;
    int minIndex = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }
    
    result.push_back(minEven);
    result.push_back(minIndex);
    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}