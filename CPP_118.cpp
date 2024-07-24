#include <iostream>
#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word);
bool isvowel(char c);
bool isconsonant(char c);

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    std::string closestVowel;
    for (int i = n - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            int j;
            for (j = i - 1; j >= 0 && !isconsonant(word[j]); --j)
                ;
            if (j >= 0) {
                closestVowel = word.substr(j + 1, i - j - 1);
                return closestVowel;
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isconsonant(char c) {
    c = tolower(c);
    return !isvowel(c) && (c >= 'b' && c <= 'z');
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}