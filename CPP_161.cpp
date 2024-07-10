string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == c ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s).reverse() : result;
}