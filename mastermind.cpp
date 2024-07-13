#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        bool foundInCode = false;
        for (int j = 0; j < 4; ++j) {
            if (guess[i] == code[j]) {
                foundInCode = true;
                break;
            }
        }

        if (!foundInCode)
            continue;

        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (guess[i] == code[j])
                count++;
        }

        if (count > 1)
            white += count - 1;
        else
            black++;
    }

    return black + white;
}