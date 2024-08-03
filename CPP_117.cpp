vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }

    string word;
    int consonantCount = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else {
            if (isalpha(c) && !strchr("aeiouAEIOU", c)) {
                consonantCount++;
            }
            word += c;
        }
    }

    if (!word.empty() && consonantCount == n) {
        result.push_back(word);
    }

    return result;
}