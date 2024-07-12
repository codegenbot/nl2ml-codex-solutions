#include <iostream>
#include <string>
#include <cctype>

std::string filp_case(const std::string& str) {
    std::string result;
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (std::islower(c))
            result.push_back(std::toupper(c));
        else if (std::isupper(c))
            result.push_back(std::tolower(c));
        else
            result.push_back(c);
    }
    return result;
}

int originalMain() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << filp_case(input) << std::endl; 
    return 0;
}