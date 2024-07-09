#include <vector>

int prod_signs(vector<int> arr){
    if (arr.empty()) {
        return -32768;
    }
    
    int product = 1;
    int sum_magnitudes = 0;

    for (int num : arr) {
        product *= (num == 0) ? 1 : (num > 0) ? 1 : -1;
        sum_magnitudes += abs(num);
    }

    return product * sum_magnitudes;
}