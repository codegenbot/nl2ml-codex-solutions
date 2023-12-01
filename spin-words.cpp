#include <iostream>
#include <sstream>
#include <string>

std::string reverseWords(const std::string& input) {
    std::istringstream iss(input);
    std::string word;
    std::string result;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    // Remove trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = reverseWords(input);
    std::cout << output << std::endl;

    return 0;
}