#include <string>

int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    // Count correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count incorrect positions with correct colors (white pegs)
    int code_counts[7] = {0};
    for (char c : code) {
        code_counts[c-'A'+1]++;
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            bool found = false;
            for (char c = 'A'; c <= 'F'; ++c) {
                if (guess[i] == c && code_counts[c-'A'+1]) {
                    code_counts[c-'A'+1]--;
                    found = true;
                    break;
                }
            }
            if (!found) white++;
        }
    }

    return black + white;