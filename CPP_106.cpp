vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 2 == 0) {
            int fact = 1;
            for (int j = 1; j <= i + 1; ++j) {
                fact *= j;
            }
            result[i] = fact;
        } else {
            int sum = 0;
            for (int j = 1; j <= i + 1; ++j) {
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}