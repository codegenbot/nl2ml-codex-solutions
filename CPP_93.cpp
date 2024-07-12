#include <iostream>
#include <string>
#include <cassert>

std::string encode(std::string message){
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