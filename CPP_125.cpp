#include <vector>
#include <string>
#include <cctype>
#include <cassert>

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> words;
    std::string word;
    for (char& c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    if (words.empty()) {
        int count = 0;
        for (char& c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        words.push_back(std::to_string(count));
    }
    return words;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

#include <iostream>

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}