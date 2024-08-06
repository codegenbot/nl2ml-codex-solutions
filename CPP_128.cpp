#include <iostream>
#include <vector>
#include <cassert>

int prod_signs(std::vector<int> arr) {
    if (arr.size() == 0) {
        return -32768;
    }

    int product = 1, sum = 0;
    for (int num : arr) {
        if (num > 0) {
            product *= 1;
        } else if (num < 0) {
            product *= -1;
        } else {
            product *= 0;
        }
        sum += abs(num);
    }

    return product * sum;
}