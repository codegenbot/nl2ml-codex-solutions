#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    getline(std::cin, input);
    
    bool capitalize = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            std::cout << (char)std::toupper(c);
            capitalize = false;
        } else {
            std::cout << c;
        }
    }
    
    return 0;
}