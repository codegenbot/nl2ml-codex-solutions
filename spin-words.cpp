#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    std::stringstream ss(input);
    std::string word;
    
    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        output += word + " ";
    }
    
    return output.substr(0, output.size() - 1); // remove the trailing space
}

int main() {
    std::string input;
    while (std::cout << "input: ") {
        std::getline(std::cin, input);
        std::cout << "output: " << spinWords(input) << std::endl;
    }
    return 0;
}