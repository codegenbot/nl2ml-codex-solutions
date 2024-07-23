#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        bool found = false;
        for (int j = 0; j < cipher1.length(); j++) {
            if (message[i] == cipher1[j]) {
                result += cipher2[j];
                found = true;
                break;
            }
        }
        if (!found) {
            result += message[i];
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first part of the cipher: ";
    std::cin >> cipher1;
    std::cout << "Enter the second part of the cipher: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to decipher: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}