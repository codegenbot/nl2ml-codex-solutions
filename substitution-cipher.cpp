#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            if (index >= 0 && index < cipher1.length()) {
                result += cipher2[index];
            } else {
                result += c; // preserve original case
            }
        } else if (c >= 'A' && c <= 'Z') { 
            int index = c - 'A';
            if (index >= 0 && index < cipher1.length()) {
                result += toupper(cipher2[index]);
            } else {
                result += toupper(c); // preserve original case
            }
        } else {
            result += c; // non-alphabetic characters remain unchanged
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}