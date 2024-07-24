```cpp
#include <iostream>
#include <algorithm>
#include <vector>

bool vectorSame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> result;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> even;
            for (int j = 0; j < vec.size(); j++) {
                if (j % 2 == 0) {
                    even.push_back(vec[j]);
                }
            }
            std::sort(even.begin(), even.end());
            result.push_back(even[0]);
        } else {
            result.push_back(vec[i]);
        }
    }
    return result;
}

int main() {
    assert(vectorSame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}