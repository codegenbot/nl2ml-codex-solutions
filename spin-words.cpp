#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string spinWords(const std::string& input) {
    std::string output;
    std::stringstream ss(input);
    std::string word;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        output += word + " ";
    }

    return output.substr(0, output.size() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;

    return 0;
}