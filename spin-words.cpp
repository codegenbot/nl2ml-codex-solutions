#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            word = " " + str.substr(i);
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word;
        }
    }
    
    result.erase(result.size() - 1);
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}