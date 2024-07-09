```cpp
#include <string>
#include <unordered_map>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    std::unordered_map<char, unsigned int> codeCount;
    std::unordered_map<char, unsigned int> guessCount;
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    for (auto& pair : codeCount) {
        if (pair.second > 0 && pair.second != guessCount[pair.first]) {
            white += pair.second - guessCount[pair.first];
        }
    }

    int codeIndex = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return std::make_pair(white, black);
}

int main() {
    std::string code = "abcde"; // or any other 4-character string consisting of 6 possible characters
    std::string guess = "abcd"; // or any other 4-character string consisting of 6 possible characters
    auto result = mastermind(code, guess);
    int white = result.first;
    int black = result.second;
    return 0;
}