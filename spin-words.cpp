#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }
    
    return !result.empty() ? result.substr(0, result.length() - 1) : result;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}