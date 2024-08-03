```c++
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (!result.empty()) {
            result += toupper(word.substr(0, 1)) + word.substr(1);
        } else {
            result = word;
        }
    }

    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;

    return 0;
}