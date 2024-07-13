string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == 'a' || tolower(c) == 'z' ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s).reverse() : result;
}