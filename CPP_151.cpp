long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == floor(lst[i]) && lst[i] % 2 != 0) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}