string str = to_string(x);
    int n = str.size();
    shift = shift % n;
    if (shift == 0) {
        return str;
    }
    string result = str.substr(n - shift) + str.substr(0, n - shift);
    return result;
}