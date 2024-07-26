#include <iostream>
#include <string>
#include <cassert>

std::string get_closest_vowel(const std::string& word) {
    const std::string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = n - 2; i >= 0; --i) {
        if (vowels.find(word[i]) != std::string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return std::string(1, word[i]);
        }
    }
    return ""; // Return empty string if no vowel found
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}