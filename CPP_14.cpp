#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>&) {
    if (size() != 1 || front().empty()) {
        return false;
    }
    for (const auto& s : *this) {
        if (s != front()) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Invalid input. Please enter a non-empty string." << std::endl;
    } else {
        std::vector<std::string> result = all_prefixes(input);
        if (issame(result)) {
            std::cout << "The prefixes are the same." << std::endl;
        } else {
            std::cout << "The prefixes are not the same." << std::endl;
        }
    }

    return 0;
}