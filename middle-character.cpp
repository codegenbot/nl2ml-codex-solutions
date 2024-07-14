#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    return len % 2 == 0 ? s.substr(len / 2 - 1, 2) : s.substr(len / 2, 1);
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    std::cout << middleCharacter(s);
    return 0;
}