Here is the solution:

string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isVowel(word[i])) {
            ++left;
        } else if (left > 0) {
            return string(1, word[i]);
        }
    }
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}