int prod_signs(vector<int> arr) {
    int product = 1;
    long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // 0 multiplied by any number is 0, so no need to continue
        }
        product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return product * sum;
}