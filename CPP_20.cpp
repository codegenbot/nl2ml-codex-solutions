#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin()));
}

std::vector<float> find_closest_elements(const std::vector<float>& arr) {
    // Implement the logic to find closest elements here.
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {1.1, 2.2});
    std::cout << "Test passed" << std::endl;

    return 0;
}