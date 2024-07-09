```c++
#include <iostream>
#include <string>
#include <cctype>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += std::toupper(c);
            capitalize = false;
        } else {
            result += std::tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}