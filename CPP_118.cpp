#include <string>
#include <cassert>

std::string get_closest_vowel(const std::string& word) {
    for (int i = word.length() - 2; i >= 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            if (word[i - 1] != 'a' && word[i - 1] != 'e' && word[i - 1] != 'i' && word[i - 1] != 'o' && word[i - 1] != 'u' &&
                word[i + 1] != 'a' && word[i + 1] != 'e' && word[i + 1] != 'i' && word[i + 1] != 'o' && word[i + 1] != 'u') {
                return std::string(1, word[i]);
            }
        }
    }
    return "";
}