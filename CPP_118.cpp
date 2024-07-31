#include <string> 

std::string get_closest_vowel(const std::string& word); 

std::string get_closest_vowel(const std::string& word) {
    std::string vowels = "AEIOUaeiou";

    for (int i = word.length() - 4; i >= 0; --i) {
        if (vowels.find(word[i]) != std::string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return std::string(1, word[i]);
        }
    }

    return "";
}

int main() {
    assert (get_closest_vowel("Above") == "o");
    
    return 0;
}