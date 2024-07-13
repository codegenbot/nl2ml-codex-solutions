#include <vector>
#include <iostream>

int main() {
    int arr[] = {1, -2, 3, 0, 4};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
    
    cout << prod_signs(vec) << endl;
}

int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        sign_product *= ((num > 0) ? 1 : ((num < 0) ? -1 : 0));
        sum_of_magnitudes += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return sign_product * sum_of_magnitudes;
}