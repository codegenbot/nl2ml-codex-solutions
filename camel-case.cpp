#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (char& c : input) {
        if (c == '-' || c == ' ') {
            capitalize = true;
        } else {
            if (capitalize) {
                c = std::toupper(c);
                capitalize = false;
            } else if (!capitalize && std::isalpha(c)) {
                c = std::tolower(c);
            }
        }
    }
    
    std::cout << input << std::endl;
    
    return 0;
}