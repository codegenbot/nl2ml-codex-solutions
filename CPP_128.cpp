#include <vector>
#include <cassert>
#include <cmath>

int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for (int num : arr) {
        product *= num > 0 ? 1 : (num < 0 ? -1 : 0);
        sum += std::abs(num);
    }
    
    return product * sum;
}