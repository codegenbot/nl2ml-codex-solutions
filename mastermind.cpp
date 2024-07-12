#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i = 0; i < 6; i++) {
        int countCode = 0, countGuess = 0;
        for(int j = 0; j < 4; j++) {
            if(code[j] == (char)(i + 'A')) countCode++;
            if(guess[j] == (char)(i + 'A')) countGuess++;
        }
        white += std::min(countCode, countGuess);
    }

    return black + white;
}

int main() {
    std::string code = "ABCD";
    std::string guess = "BABA";

    int result = mastermind(code, guess);

    std::cout << "Number of white pegs and black pegs: " << result << std::endl;

    return 0;
}