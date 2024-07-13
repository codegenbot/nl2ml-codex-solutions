#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        int count = 0;
        for (char d : code) {
            if (c == d) {
                count++;
            }
        }
        if (count > 1 && c != code[0] && c != code[1] && c != code[2] && c != code[3]) {
            white += count - 1;
        } else if (count == 1) {
            for (int i = 0; i < 4; ++i) {
                if (c == code[i]) {
                    black++;
                    break;
                }
            }
        }
    }

    return black + white;
}