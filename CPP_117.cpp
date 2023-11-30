vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            int count = 0;
            for (int j = 0; j < word.length(); j++) {
                if (isalpha(word[j]) && !isvowel(word[j])) {
                    count++;
                }
            }
            if (count == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    int count = 0;
    for (int j = 0; j < word.length(); j++) {
        if (isalpha(word[j]) && !isvowel(word[j])) {
            count++;
        }
    }
    if (count == n) {
        result.push_back(word);
    }
    return result;
}