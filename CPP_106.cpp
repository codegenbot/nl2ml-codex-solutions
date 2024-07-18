vector<int> f(int n){
    vector<int> result(n);
    int sum = 0;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            fact *= i;
            result[i-1] = fact;
        } else {
            sum += i;
            result[i-1] = sum;
        }
    }
    return result;
}