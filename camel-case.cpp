#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool capitalize = true;

    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            output += toupper(c);
            capitalize = false;
        } else {
            output += tolower(c);
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << camelCase(input) << '\n';

    return 0;
}