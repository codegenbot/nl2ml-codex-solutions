#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) { 
        int digit = (c - '0') * (c - '0'); 
        output += std::to_string(digit);
    }
    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a number: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Error: Input cannot be empty." << std::endl;
    } else {
        std::cout << "Squared digits: " << squareDigits(input) << std::endl;
    }
    return 0;