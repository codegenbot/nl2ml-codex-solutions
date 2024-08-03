#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : str) {
        if (c == '-') {
            if (!firstWord) {
                result += toupper(c);
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += toupper(c);
            }
            firstWord = true;
        } else {
            if (!firstWord) {
                result += c;
            } else {
                result += c;
                firstWord = false;
            }
        }
    }
    
    return result;
}

int main() {
    std::string str;
    while (std::getline(std::cin, str)) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;