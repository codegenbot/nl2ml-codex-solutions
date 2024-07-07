int main() {
    vector<float> lst = {1.0f, 2.5f, -3.0f, 4.0f, 5.5f};
    float odd_sum = 0;
    assert(double_the_difference(lst) == odd_sum);
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}