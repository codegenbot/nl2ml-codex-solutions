#include <vector>
#include <cassert>
#include <cmath>

int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }

    int signProduct = 1;
    int sumMagnitudes = 0;

    for (int num : arr) {
        if (num > 0) {
            signProduct *= 1;
        } else if (num < 0) {
            signProduct *= -1;
        }

        sumMagnitudes += std::abs(num);
    }

    return signProduct * sumMagnitudes;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}