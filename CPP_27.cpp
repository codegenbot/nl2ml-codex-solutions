#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        if (std::islower(str[i])) {
            str[i] = std::toupper(str[i]);
        } else if (std::isupper(str[i])) {
            str[i] = std::tolower(str[i]);
        }
    }
    return str;
}
