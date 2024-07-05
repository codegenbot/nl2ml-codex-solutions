#include <iostream>
#include <string>

bool is_happy(std::string s) {
    if (s.length() < 3) return false;
    for (int i = 0; i <= s.length() - 3; ++i) {
        if (s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    if (is_happy(input)) {
        std::cout << "The string is happy.\n";
    } else {
        std::cout << "The string is not happy.\n";
    }
    return 0;
}