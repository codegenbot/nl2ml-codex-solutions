#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (char &c : input) {
        if (capitalize && c != '-') {
            std::cout << (char)std::toupper(c);
            capitalize = false;
        } else if (c == '-') {
            capitalize = true; // Set capitalize to true instead of false
        } else {
            std::cout << c;
        }
    }
    
    return 0;
}