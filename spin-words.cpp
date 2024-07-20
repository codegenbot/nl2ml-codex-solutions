```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;

    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] != ' ') {
            word += sentence[i];
        } else {
            if(word.length() >= 5) {
                std::string reversedWord(word.rbegin(), word.rend());
                result += (reversedWord + " ");
                word = "";
            } else {
                result += (word + " ");
                word = "";
            }
        }
    }

    if(word.length() >= 5) {
        std::string reversedWord(word.rbegin(), word.rend());
        result += reversedWord;
    } else {
        result += word;
    }

    return result.substr(0, result.find_last_of(' '));
}

int main() {
    std::string input;
    while (std::cout << "Enter a string: ", std::getline(std::cin, input)) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}