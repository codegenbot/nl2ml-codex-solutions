#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    int mid = len / 2;
    if (len % 2 == 0) {
        return s.substr(mid - 1, 2);
    } else {
        return s.substr(mid, 1);
    }
}

int main() {
    std::string input;
    // Ask user for input
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}