#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return std::vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    // Test cases can be added here
    return 0;
}