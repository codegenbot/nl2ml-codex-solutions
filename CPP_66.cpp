```cpp
#include <iostream>
#include <string>

int digitSum(const std::string& str) {
    int sum = 0;
    for (char c : str) {
        if (std::isdigit(c)) {
            int digitValue = c - '0';
            sum += digitValue;
        }
    }
    return sum;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    size_t pos = 0;
    while (pos < input.size() && ::isspace(input[pos])) {
        ++pos;
    }
    std::string newInput = input.substr(pos, input.size() - pos);
    if (!newInput.empty()) { 
        int digitPos = -1;
        for (int i = 0; i < newInput.size(); ++i) {
            if (!std::isdigit(newInput[i])) {
                digitPos = i;
                break;
            }
        }
        if (digitPos == -1) {
            std::string digitsOnly;
            for (char c : newInput) {
                if(std::isdigit(c)) {
                    int digitValue = c - '0';
                    digitsOnly += static_cast<char>(digitValue + '0');
                }
            }
            int result = digitSum(digitsOnly);
            std::cout << "The sum of digits is: " << result << std::endl;
        } else {
            std::string digitsOnly = newInput.substr(0, digitPos);
            int result = digitSum(digitsOnly);
            std::cout << "The sum of digits is: " << result << std::endl;
        }
    } else {
        std::cout << "Error: Empty input." << std::endl;
    }
    return 0;
}