#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    if (s.empty()) return s;

    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            if (!capitalizeNext) {
                result[0] = toupper(result[0]);
                capitalizeNext = true;
            } 
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << kebabToCamel(s) << std::endl;
    }
    return 0;
}