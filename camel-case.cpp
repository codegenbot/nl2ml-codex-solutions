Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
            result += " ";
        } else {
            if (result.empty()) {
                result = tolower(s[i]);
            } else {
                result += tolower(s[i]);
            }
        }
    }
    return result.substr(0, result.length() - 1);
}