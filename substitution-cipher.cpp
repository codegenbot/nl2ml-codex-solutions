#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string decipheredMessage = "";
    for (int i = 0; i < message.length(); i++) {
        if (cipher1[i] == message[i]) {
            int index = cipher2.find(message[i]);
            decipheredMessage += cipher2[index];
        } else {
            decipheredMessage += message[i];
        }
    }
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}