string num_str = to_string(x);
    int n = num_str.size();
    shift %= n;
    if (shift == 0) {
        return num_str;
    }
    if (shift > n / 2) {
        reverse(num_str.begin(), num_str.end());
        return num_str;
    }
    string shifted = num_str.substr(n - shift) + num_str.substr(0, n - shift);
    return shifted;
}