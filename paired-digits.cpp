#include <vector>
#include <iostream>
#include <string>

int pairedDigits(const std::string& s) {
    int sum = 0;
    for (size_t i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i + 1]) {
            sum += s[i];
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;
    std::cout << "The sum of paired digits is: " << pairedDigits(input) << std::endl;
    return 0;
}