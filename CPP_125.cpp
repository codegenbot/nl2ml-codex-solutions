bool issame(char a, char b) {
    return tolower(a) == tolower(b);
}

vector<string> split_words(const string& txt) {
    vector<string> result;
    string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    if (result.size() == 0) {
        int oddLowercaseCount = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                oddLowercaseCount++;
            }
        }
        result.push_back(to_string(oddLowercaseCount));
    }
    return result;
}