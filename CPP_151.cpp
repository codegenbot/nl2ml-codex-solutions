Here is the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (floor(num) == num && num > 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}