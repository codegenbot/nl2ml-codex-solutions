vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        bool found = false;
        for (int j = 0; j < c.length(); j++) {
            if (s[i] == c[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += s[i];
        }
    }
    result.push_back(temp);
    string reverse = temp;
    reverse.resize(reverse.size());
    for (int i = 0; i < reverse.size(); i++) {
        reverse[reverse.size() - i - 1] = reverse[i];
    }
    if (temp == reverse) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}