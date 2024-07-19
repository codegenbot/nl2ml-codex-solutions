#include <iostream>
#include <vector>
#include <cassert>

int prod_signs(std::vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return product * sum;

}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}