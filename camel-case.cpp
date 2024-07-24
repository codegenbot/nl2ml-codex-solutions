#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == '-') {
            if (result != "") {
                result += char toupper(str[i + 1]);
            } else {
                result += str.substr(i + 1, 1);
            }
        } else if (str[i] == ' ') {
            continue;
        } else {
            if (i > 0) {
                result += char tolower(str[i]);
            } else {
                result = str.substr(0, i);
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}