string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? char(c - ('a' - 'A')) : char(c + ('a' - 'A'));
        } else {
            result += c;
        }
    }
    return result;
}