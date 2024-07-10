string string_xor(const string& a, const string& b) {
    string result;
    for (size_t i = 0; i < a.size() && i < b.size(); i++) {
        result += (a[i] != b[i]) ? "1" : "0";
    }
    return result;
}