vector<int> result;
    result.push_back(1);
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        n = n % 2 == 0 ? n / 2 : 3 * n + 1;
    }
    sort(result.begin(), result.end());
    return result;