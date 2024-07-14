#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            result += c;
        } else if (c == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += c;
        } else {
            if (result.empty() || result.back() != '-') {
                result += tolower(c);
            } else {
                result[0] = toupper(result[0]);
                result = c + result.substr(1);
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