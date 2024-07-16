#include <iostream>
#include <string>

bool is_nested(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']' && count > 0) {
            count--;
        }
    }
    return count == 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string containing square brackets: ";
    std::cin >> input;

    if (is_nested(input)) {
        std::cout << "The brackets are properly nested." << std::endl;
    } else {
        std::cout << "The brackets are not properly nested." << std::endl;
    }

    return 0;
}