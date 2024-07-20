vector<int> tri(int n){
    vector<int> result(n+1);
    if (n >= 0) result[0] = 3;
    if (n >= 1) result[1] = 1;
    if (n >= 2) result[2] = 3;
    if (n >= 3) result[3] = 2;
    for (int i = 4; i <= n; ++i) {
        if (i % 2 == 0) {
            result[i] = 1 + i / 2;
        } else {
            result[i] = result[i - 1] + result[i - 2] + result[i + 1];
        }
    }
    return result;
}