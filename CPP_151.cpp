long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (auto num : lst) {
        if (num == (int)num && num > 0 && ((int)num % 2 != 0)) {
            sum += (int)num * (int)num;
        }
    }
    return sum;
}