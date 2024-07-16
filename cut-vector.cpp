#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

int main() {
    std::vector<int> vec = {6977, 8312, 921, 3362, 3078};
    int idx = 0;
    int min_diff = INT_MAX;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            idx = i;
        }
    }

    std::vector<int> subvec1(vec.begin(), vec.begin() + idx + 1);
    std::vector<int> subvec2(vec.begin() + idx + 1, vec.end());

    for (const auto& num : subvec1) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    for (const auto& num : subvec2) {
        std::cout << num << " ";
    }

    return 0;
}