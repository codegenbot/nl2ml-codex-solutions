#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            if (result.empty()) { // Add this check
                result += tolower(c);
            } else {
                result += toupper(c);
                capitalize = false;
            }
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "CamelCase representation: " << kebabToCamel(input) << std::endl;

    return 0;
}