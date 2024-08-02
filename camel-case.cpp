#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = true;
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ' && c != '-') {
            std::cout << (capitalize ? (char)toupper(c) : tolower(c));
            capitalize = false;
        }
        if (c == ' ') {
            capitalize = true;
            std::cout << " ";
        }
    }

    return 0;
}