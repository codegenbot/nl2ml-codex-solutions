#include <vector>
#include <iostream>
#include <string>

int pairedDigits(const std::string& str) {
    int sum = 0;
    for (size_t i = 0; i < str.length() - 1; ++i) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
        if (i == str.length() - 2 && str[i] == str[i + 1]) {
            sum += str[i + 1] - '0';
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;
    std::cout << "Sum of paired digits: " << pairedDigits(input) << std::endl;
    return 0;
}