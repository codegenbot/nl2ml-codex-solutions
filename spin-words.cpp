```cpp
#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result;
    int wordLength = 0;

    for (char c : str) {
        if (c == ' ') {
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i) {
                    result += str[wordLength - i - 1];
                }
            } else {
                result += c;
            }
            wordLength = 0;
        } else {
            result += c;
            ++wordLength;
        }
    }

    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; --i) {
            result += str[wordLength - i - 1];
        }
    } else {
        result = str;
    }

    return result;
}

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";

    for (char c : str + " ") {
        if (c == ' ') {
            if (word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; --i) {
                    result += word[i];
                }
            } else {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; --i) {
            result += word[i];
        }
    } else {
        result = str;
    }

    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string: ";
        std::cin >> str;
        std::cin.ignore(); 
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}