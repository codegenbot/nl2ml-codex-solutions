#include <iostream>
using namespace std;

int bowlingScore(const char* s) {
    int score = 0;
    int currentRoll = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'X') {
            score += 30;
            currentRoll = bowlingScore(&s[i+1]) - 10; // adjust for next roll
        } else if (s[i] == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
        } else {
            int roll = s[i] - '0';
            score += roll;
            currentRoll++;
            if (currentRoll == 2) {
                score += roll * 2;
                currentRoll = 0;
            }
        }
    }
    return score;
}

int main() {
    string input;
    cout << "Enter the bowling scores: ";
    getline(cin, input);
    int totalScore = bowlingScore(input.c_str());
    cout << "The total score is: " << totalScore << endl;
    return 0;
}