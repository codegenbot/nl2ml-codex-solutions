vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    int consonants = 0;

    for (char c : s) {
        if (c != ' ') {
            if (!isVowel(c)) {
                consonants++;
            }
            word += c;
        } else {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        }
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;

}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}