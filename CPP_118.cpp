string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            int j;
            for (j = i - 1; j >= 0 && !isvowel(word[j]); --j);
            return word.substr(j + 1, i - j - 1);
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}