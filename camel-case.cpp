```cpp
#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = false;

    for (char c : str) {
        if (c == '-') {
            if (!capitalize) {
                result += toupper(str[0]);
                capitalize = true;
            }
        } else {
            if (capitalize) {
                result += toupper(c);
                capitalize = false;
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "Output: " << kebabToCamel(input) << std::endl;

    return 0;
}