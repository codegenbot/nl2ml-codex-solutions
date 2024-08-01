
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else {
            std::cout << (capitalize ? c : (char)tolower(c));
            capitalize = false;
        }
    }

    return 0;
}