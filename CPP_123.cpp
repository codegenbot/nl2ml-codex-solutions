Here is the completed code:

vector<int> get_odd_collatz(int n) {
    vector<int> res = {n};
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0)
            res.push_back(n);
    }
    sort(res.begin(), res.end());
    return res;
}