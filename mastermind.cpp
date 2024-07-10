#include <string>

struct PegCounts { int white; int black; };

PegCounts mastermind(string code, string guess) {
    PegCounts result = {0, 0};
    string remainingGuess = guess;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            result.black++;
            remainingGuess[i] = ' ';
        }
    }

    // Count white pegs
    int codeCount[256] = {0};
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            codeCount[guess[i]]--;
            if (codeCount[guess[i]] == 0) {
                codeCount[guess[i]] = -1;
            }
        }
    }
    for (int i = 0; i < 4; ++i) {
        if (remainingGuess[i] != ' ') {
            if (codeCount[code[i]] > 0) {
                result.white++;
                codeCount[code[i]]--;
            } else if (codeCount[guess[i]] == -1) {
                result.black++;
            }
        }
    }

    return result;
}