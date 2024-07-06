#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int rollCount = 0;

    for (char c : s) {
        if (c == '/') {
            if (currentRoll >= 10) {
                score += currentRoll + 10;
            } else {
                score += currentRoll + max(1, currentRoll);
            }
            currentRoll = 0;
            rollCount++;
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }

    if (currentRoll >= 10) {
        score += currentRoll + 10;
    } else {
        score += currentRoll + max(1, currentRoll);
    }

    return score;
}