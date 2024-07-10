string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 2; i >= 1; --i) {
        if (!isalpha(word[i])) continue;
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return word.substr(i);
        }
    }
    return "";
}