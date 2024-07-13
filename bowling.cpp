#include <string>
using namespace std;

int bowling(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll >= 2)
                score += min(10, roll);
            else
                score += roll * 10;
            roll = 0;
        } else if (c == 'X') {
            score += 30;
            roll = 0;
        } else {
            int strikeOrSpare = c - '0';
            roll += strikeOrSpare;
        }
    }
    if (roll >= 2)
        score += min(10, roll);
    else
        score += roll * 10;
    return score;
}