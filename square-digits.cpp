```cpp
#include <string>
#include <cctype>

std::string squareDigits(std::string input) {
    std::string result = "";
    for (char c : input) {
        if (std::isdigit(c)) { 
            int digit = c - '0';
            result += std::to_string(digit * digit);
        }
    }
    return result;
}

int main() {
    std::cout << squareDigits("34") << std::endl; 
    return 0;
}