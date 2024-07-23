string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (((c - base + 2 * 2) % 26) + base);
            result += c;
        } else {
            result += c;
        }
    }
    return result;
}