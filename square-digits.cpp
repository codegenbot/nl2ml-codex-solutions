#include <string>

std::string squareDigits(const char* input) {
    std::string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += std::to_string(digit * digit);
    }
    return result;
}

int main() {
    std::cout << squareDigits("34") << std::endl; 
    return 0;
}