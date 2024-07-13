#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (i < cipher1.length()) {
            int index = cipher1.find(message[i]);
            if (index != std::string::npos) {
                result += cipher2[index];
            } else {
                result += message[i];
            }
        } else {
            result += message[i];
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first string of the cipher: ";
    std::cin >> cipher1;
    std::cout << "Enter the second string of the cipher: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to be deciphered: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}