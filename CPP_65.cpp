string s = to_string(x);
    int n = s.size();
    shift %= n;
    
    if (shift == 0) {
        return s;
    }
    
    string result = s.substr(n - shift) + s.substr(0, n - shift);
    return result;
}