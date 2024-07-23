#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            if (result.back() != ' ') {
                result.push_back(toupper(s[i]));
            } else {
                result += toupper(s[i]);
                break;
            }
        } else if (s[i] == ' ') {
            result.push_back(toupper(s[i + 1]));
            i++;
        } else {
            result += s[i];
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