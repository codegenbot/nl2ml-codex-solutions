#include <vector>

int prod_signs(std::vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // If a zero is encountered, the product of signs will be zero
        }
        sign_product *= (num > 0 ? 1 : -1);
        sum_of_magnitudes += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return sign_product * sum_of_magnitudes;
}