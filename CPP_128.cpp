int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        sign_product *= (num > 0 ? 1 : -1);
        sum_of_magnitudes += abs(num);
    }

    if (arr.empty()) {
        return INT_MIN; // equivalent to -32768
    }

    return sum_of_magnitudes * sign_product;
}