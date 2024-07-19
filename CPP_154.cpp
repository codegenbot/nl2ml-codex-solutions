bool cycpattern_check(const string& a, const string& b) {
    int n = a.size();
    int m = b.size();
    if (n != m) return false;
    
    for (int i = 0; i < n; ++i) {
        if (a.substr(i) + a.substr(0, i) == b) return true;
    }
    
    return false;
}