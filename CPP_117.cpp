vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    int consonant_count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                words.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else {
            if (isalpha(c) && !strchr("aeiouAEIOU", c)) {
                consonant_count++;
            }
            word += c;
        }
    }
    
    if (consonant_count == n) {
        words.push_back(word);
    }
    
    return words;
}