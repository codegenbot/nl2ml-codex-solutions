vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
    }
    for (; n > 0; ) {
        if (n % 2 != 0)
            result.push_back(n);
        if (n > 1)
            n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
        else
            break;
    }
    sort(result.begin(), result.end());
    return result;
}