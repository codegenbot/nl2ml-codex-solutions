```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int wordLength = 0;
    bool inWord = false;

    for (char c : sentence) {
        if (c == ' ') {
            if (inWord && wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += sentence[wordLength - i - 1];
            } else
                result += c;
            inWord = false;
        } else {
            inWord = true;
            result += c;
            wordLength++;
            if (wordLength >= 5 && inWord) { 
                std::string reversed;
                for (int i = wordLength - 1; i >= 0; --i)
                    reversed += sentence[wordLength - i - 1];
                result += reversed;
                inWord = false;
                wordLength = 0;
            }
        }
    }

    if (inWord && wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += sentence[wordLength - i - 1];
    } else
        result = sentence;

    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}