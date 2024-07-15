#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string &a, const std::string &b) {
    return a == b;
}

std::vector<std::string> separate_paren_groups(const std::string &paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0) {
                current_group += c;
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else if (open_braces == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string with parentheses: ";
    std::cin >> input;

    std::vector<std::string> groups = separate_paren_groups(input);

    for (const std::string &group : groups) {
        std::cout << group << std::endl;
    }

    return 0;
}