#include <iostream>
#include <cassert>
#include <cctype>

std::string encode(const std::string& message) {
    std::string encoded_message = message;
    for (char& c : encoded_message) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = c + 2;
            }
        }
    }
    return encoded_message;
}