#include <vector>
#include <string>
#include <cctype>

bool isalpha(char c) {
    return std::isalnum(c);
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";

    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = false;
            int consonant_count = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isspace(ch) && !isvowel(tolower(ch))) {
                    consonant_count++;
                    if (consonant_count == n) {
                        has_n_consonants = true;
                        break;
                    }
                }
            }
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = ""; // Clear word
        }
    }
    return result;
}