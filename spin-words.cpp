#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += (word.length() >= 5 ? std::string(word.rbegin(), word.rend()) : word) + " ";
            word.clear();
        } else {
            word += str[i];
        }
    }
    
    // Check the last word
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    
    result += (word.length() >= 5 ? std::string(word.rbegin(), word.rend()) : word);
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);
    std::cout << spinWords(input) << std::endl; 
    return 0;
}