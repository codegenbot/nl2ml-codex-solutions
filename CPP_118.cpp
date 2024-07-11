string vowels = "AEIOUaeiou";
    int n = word.size();
    for (int i = n - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            if (isalpha(word[i - 1]) && !vowels.find(word[i - 1]) && isalpha(word[i + 1]) && !vowels.find(word[i + 1])) {
                return string(1, word[i]);
            }
        }
    }
    return "";
}