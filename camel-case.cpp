#include <iostream>
#include <string>
#include <vector>

std::string convertToCamelCase(const std::string& input) {
    std::string result;
    std::vector<std::string> words;
    std::string word;

    for (char c : input) {
        if (c == '-') {
            words.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }
    words.push_back(word);

    for (int i = 0; i < words.size(); i++) {
        if (i == 0) {
            result += words[i];
        } else {
            result += words[i][0] - 'a' + 'A';
            result += words[i].substr(1);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << convertToCamelCase(input) << std::endl;
    return 0;
}