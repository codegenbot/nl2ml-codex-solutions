int main() {
    vector<float> lst = {1.5f, -2.0f, 3.0f, 4.0f};
    assert(double_the_difference(lst) == 29);
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