#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string result;
    bool capitalize = true;

    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;

    std::cout << "The camelCase equivalent is: " << camelCase(input) << std::endl;

    return 0;
}