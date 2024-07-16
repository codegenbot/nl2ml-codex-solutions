```cpp
#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += std::to_string(digit*digit);
    }
    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    
    // Print the result
    if (input.length() > 0) {
        std::cout << squareDigits(input) << "\n";
    } else {
        std::cout << "Invalid input.\n";
    }
    
    return 0;
}