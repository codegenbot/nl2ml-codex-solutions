#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        int squared = digit * digit;
        output += to_string(squared);
    }
    return output;
}

int main() {
    std::cout << squareDigits("0") << std::endl; // 0
    std::cout << squareDigits("1") << std::endl; // 1
    std::cout << squareDigits("2") << std::endl; // 4
    std::cout << squareDigits("3") << std::endl; // 9
    std::cout << squareDigits("4") << std::endl; // 16
    return 0;
}