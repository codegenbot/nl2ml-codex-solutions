bool same_chars(string s0, string s1) {
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());
    return (s0.size() == s1.size()) && (count(s0.begin(), s0.end(), s0[0]) > 0);
}