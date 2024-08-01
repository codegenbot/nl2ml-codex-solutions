#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    bool isWordLongEnough = false;
    for (char c : str) {
        if (c == ' ') {
            if (isWordLongEnough) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += str[wordLength - i - 1];
                isWordLongEnough = false;
            }
            result += c;
        } else {
            wordLength++;
            if (wordLength >= 5) 
                isWordLongEnough = true;
            result += c;
        }
    }
    if (isWordLongEnough) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += str[wordLength - i - 1];
    }
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string (or 'q' to quit): ";
        std::cin >> str;
        if (str == "q")
            break;
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}