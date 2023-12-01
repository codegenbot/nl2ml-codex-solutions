#include <iostream>
#include <string>

std::string decipherMessage(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        size_t index = cipher2.find(c);
        if (index != std::string::npos) {
            result += cipher1[index];
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipherMessage(cipher1, cipher2, message) << std::endl;
    return 0;
}