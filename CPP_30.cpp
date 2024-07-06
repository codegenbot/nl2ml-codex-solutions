```cpp
#include <vector>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(std::equal(get_positive({}).begin(), get_positive({}).end(), {}.begin()));
    std::cout << "All assertions passed." << std::endl;
    return 0;
}