```cpp
#include <string>
#include <iostream>

std::string middleCharacter(const std::string& s) {
    int len = s.length();
    return len % 2 == 0 ? s.substr(len/2-1, 2) : s.substr(len/2, 1);
}

int main() {
    const std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Middle character(s): " << middleCharacter(input) << std::endl;
    return 0;
}