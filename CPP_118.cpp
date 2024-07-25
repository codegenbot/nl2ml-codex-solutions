string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isvowel(word[i])) {
            ++left;
        } else if (left > 0) {
            return string(1, tolower(word[i]));
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}