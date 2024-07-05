#include <string>

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + max(0, roll);
            roll = 0;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
        } else {
            roll++;
        }
    }
    return score;