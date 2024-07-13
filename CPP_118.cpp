string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isvowel(word[right])) {
            left = right + 1;
            break;
        }
    }
    for (int i = left; i < word.size(); ++i) {
        if (isvowel(word[i])) {
            return string(1, tolower(word[i]));
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}