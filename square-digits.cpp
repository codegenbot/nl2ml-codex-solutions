#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for(int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        output += std::to_string(digit * digit);
    }
    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;

    std::cout << squareDigits(input) << std::endl; // Call your function

    return 0;
}