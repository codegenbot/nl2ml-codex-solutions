string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0 && !isvowel(word[i]); i--) {
        if (i > 0 && !isvowel(word[i-1])) {
            return string(1, word[i]);
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}