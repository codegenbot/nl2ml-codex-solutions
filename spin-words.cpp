#include <iostream>
#include <sstream>
#include <string>

std::string spinWords(const std::string& sentence) {
    std::string result;
    std::istringstream iss(sentence);
    std::string word;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    // Remove the trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string result = spinWords(sentence);
    std::cout << result << std::endl;

    return 0;
}