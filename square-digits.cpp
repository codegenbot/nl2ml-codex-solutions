#include <string>
#include <sstream>

std::string squareDigits(std::string input) {
    std::stringstream output;
    for (char c : input) {
        int digit = c - '0';
        output << std::to_string(digit * digit);
    }
    return output.str();
}