#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output;
    for (char c : input) {
        int digit = c - '0';
        output += std::to_string(digit * digit);
    }
    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input; 
    std::string output = squareDigits(input);
    std::cout << "Squared digits: " << output << std::endl;
    return 0;