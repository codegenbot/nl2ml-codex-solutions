#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int consonantCount = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else if (isalpha(c)) {
            if (std::tolower(c) != 'a' && std::tolower(c) != 'e' && std::tolower(c) != 'i' && std::tolower(c) != 'o' && std::tolower(c) != 'u') {
                consonantCount++;
            }
            word += c;
        }
    }
    
    if (consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}

assert(issame(select_words("a b c d e f", 1), std::vector<std::string>{"b", "c", "d", "f"}));