#include <iostream>
#include <string>

int main() {
    int num;
    std::cin >> num;
    std::string result = "";
    
    while (num != 0) {
        int digit = abs(num) % 10; // Handle negative numbers
        int square = digit * digit;
        result = std::to_string(square) + result;
        num /= 10;
    }
    
    std::cout << result << std::endl;
    return 0;
}