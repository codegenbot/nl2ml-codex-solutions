int main() {
    vector<float> lst = {1.5f, 2.7f, -3.8f, 4.0f, -0.5f};
    long long odd_sum;
    odd_sum = double_the_difference(lst);
    return 0;
}
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}