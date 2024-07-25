#include <string>

string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.length() - 1; right >= 0; --right) {
        if (!isvowel(word[right])) {
            ++left;
        } else if (left > 0) {
            return string(1, tolower(word[right]));
        }
    }
    return "";
}

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}