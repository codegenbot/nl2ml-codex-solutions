```cpp
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::string deciphered_message = message;
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        int pos = cipher_map1.find(c);
        if (pos != std::string::npos) {
            deciphered_message[i] = cipher_map2[pos];
        }
    }
    return deciphered_message;
}

int main() {
    std::string input;
    std::cout << "Enter the first map: ";
    std::getline(std::cin, input);
    std::string cipher_map1 = input;
    input.clear();

    std::cout << "Enter the second map: ";
    std::getline(std::cin, input);
    std::string cipher_map2 = input;
    input.clear();

    std::cout << "Enter the message to decipher: ";
    std::getline(std::cin, input);
    std::string message = input;

    std::string result = decipher(cipher_map1, cipher_map2, message);
    std::cout << "Deciphered message: " << result << std::endl;
    return 0;
}