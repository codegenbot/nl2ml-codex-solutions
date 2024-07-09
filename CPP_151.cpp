long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (auto num : lst) {
        if (num > 0 && floor(num) == num && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(num) * static_cast<long long>(num);
        }
    }
    return sum;
}