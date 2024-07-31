Here is the solution:

```cpp
int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;

    int product_of_signs = 1;
    for (int num : arr) {
        if (num == 0) return 0;
        product_of_signs *= (num > 0 ? 1 : -1);
    }

    int sum_of_magnitudes = 0;
    for (int num : arr) {
        sum_of_magnitudes += abs(num);
    }

    return product_of_signs * sum_of_magnitudes;
}