char get_closest_vowel(const std::string& word) {
    std::string vowels = "aeiouAEIOU";
    int n = word.length();
    for (int i = n - 2; i >= 0; --i) {
        if (vowels.find(word[i]) != std::string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return word[i];
        }
    }
    return '\0';
}