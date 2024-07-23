#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-' || str[i] == ' ') {
            if (str[i] == '-') {
                i++;
                while (i < str.length() && str[i] == '-') i++;
                if (i < str.length()) {
                    result += toupper(str[i]);
                    i++;
                }
            } else {
                if (!result.empty()) {
                    result += toupper(str[i]);
                } else {
                    result += tolower(str[i]);
                }
            }
        } else {
            if (!result.empty()) {
                result += toupper(str[i]);
            } else {
                result += tolower(str[i]);
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    while (getline(std::cin, str)) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}