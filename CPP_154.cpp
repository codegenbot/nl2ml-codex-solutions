bool cycpattern_check(const string& a, const string& b) {
    string s = a + a;
    return s.find(b) != string::npos;
}