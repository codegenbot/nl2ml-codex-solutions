#include <string>
#include <unordered_map>
#include <iostream>

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
    std::string code = "ABCD";
    std::string guess1 = "ABAD";
    std::cout << mastermind(code, guess1).first << " white pegs and " << mastermind(code, guess1).second << " black pegs." << std::endl;

    std::string guess2 = "BCDF";
    std::cout << mastermind(code, guess2).first << " white pegs and " << mastermind(code, guess2).second << " black pegs." << std::endl;
    
    return 0;
}