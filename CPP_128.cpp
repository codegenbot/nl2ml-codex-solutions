int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    for (int x : arr) {
        if (x == 0) {
            return 0;
        }
        product *= sign(x);
        sum += abs(x);
    }
    return product * sum > INT_MAX ? -32768 : product * sum;
}

int sign(int x) {
    return x >= 0 ? 1 : -1;
}