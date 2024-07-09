```cpp
#include <iostream>
#include <string>
#include <stdexcept>

std::string string_xor(std::string a, std::string b) {
    if (a.length() != b.length())
        throw std::invalid_argument("Input strings must have the same length.");

    std::string result = "";
    for (int i = 0; i < a.length(); i++) {
        char c = (a[i] - '0' ^ b[i] - '0') + '0';
        result += c;
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    try {
        std::string str1, str2;
        std::cout << "Enter the first string: ";
        std::getline(std::cin, str1);
        
        std::cout << "Enter the second string: ";
        std::getline(std::cin, str2);

        if (!str1.empty() && !str2.empty()) {  
            if (!str1.empty()) {  // check if str1 is not empty
                str1.pop_back(); 
            }
            if (!str2.empty()) {  // check if str2 is not empty
                str2.pop_back();
            }

        try {
            std::string result = string_xor(str1, str2);
            std::cout << "XOR of the two strings is: " << result << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
    } catch (...) { 
        std::cout << "An error occurred." << std::endl;
    }
}