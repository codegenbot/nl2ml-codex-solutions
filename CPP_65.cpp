string numStr = to_string(x);
    int n = numStr.length();
    shift %= n;
    if (shift == 0) {
        return numStr;
    }
    string result = numStr.substr(n - shift) + numStr.substr(0, n - shift);
    return result;
}