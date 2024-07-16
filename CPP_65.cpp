string circular_shift(int x, int shift) {
    string s = to_string(x);
    int n = s.size();
    shift %= n;
    if (shift == 0) return s;
    if (shift > n / 2) {
        reverse(s.begin(), s.end());
        return s;
    }
    return s.substr(n - shift) + s.substr(0, n - shift);
}