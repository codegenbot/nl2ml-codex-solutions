```cpp
#include <iostream>
#include <string>
#include <algorithm>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        std::string word = "";
        for (int j = i; j < s.length() && s[j] != ' '; j++) {
            word += s[j];
        }
        sort(word.begin(), word.end());
        result += word;
        i += word.length() - 1;
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);
    std::cout << "Anti-shuffled sentence: " << anti_shuffle(input) << std::endl;
    return 0;
}