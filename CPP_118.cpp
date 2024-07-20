string get_closest_vowel(string word) {
    string vowels = "AEIOUaeiou";
    int n = word.size();
    for (int i = n - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isupper(word[i]) &&
            !isupper(word[i - 1]) && !isupper(word[i + 1])) {
            return string(1, word[i]);
        } else if (vowels.find(word[i]) != string::npos && isupper(word[i]) &&
                   isupper(word[i - 1]) && isupper(word[i + 1])) {
            return string(1, word[i]);
        }
    }
    return "";
}