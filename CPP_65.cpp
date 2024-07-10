string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.size();
    shift = shift % n;
    if (shift == 0) {
        return str;
    }
    if (shift > n) {
        reverse(str.begin(), str.end());
        return str;
    }
    return str.substr(n - shift) + str.substr(0, n - shift);
}