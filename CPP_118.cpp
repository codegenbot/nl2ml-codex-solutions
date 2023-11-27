#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
    string vowels = "aeiouAEIOU";
    return vowels.find(c) != string::npos;
}

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int n = word.size();

    for (int i = n - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos && !isVowel(word[i + 1]) && !isVowel(word[i - 1])) {
            return string(1, word[i]);
        }
    }

    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");

    return 0;
}