#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    int i = 0; // declare the index variable

    for (char c : str) {
        if (c == '-') {
            if (!firstWord) {
                result += toupper(c);
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += char(tolower(c));
            }
            firstWord = true;
        } else {
            if (firstWord) {
                result += c;
            } else {
                result += char(tolower(c));
            }
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}