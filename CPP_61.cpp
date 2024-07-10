#include <iostream>
#include <string>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count < 0) {
                return false;
            }
        }
    }
    return count == 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string of brackets: ";
    std::cin >> input;

    if (correct_bracketing(input)) {
        std::cout << "Brackets are balanced." << std::endl;
    } else {
        std::cout << "Brackets are not balanced." << std::endl;
    }

    return 0;
}