#include <iostream>
#include <string>
#include <algorithm>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += std::min(codeCount[i], guessCount[i]);
    }

    return std::make_pair(whitePegs, blackPegs);
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    std::pair<int, int> result = mastermind(code, guess);
    std::cout << result.first << std::endl;
    std::cout << result.second << std::endl;

    return 0;
}