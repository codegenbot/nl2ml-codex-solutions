#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            if (roll > 10) {
                score += 10;
            } else {
                score += roll;
            }
            roll = 0;
        } else if (isdigit(s[i])) {
            if (roll == 0 || s[i] - '0' > 1) {
                roll *= 10;
                roll += s[i] - '0';
            } else {
                roll = roll * 10 + s[i] - '0';
            }
        }
    }

    if (roll > 10)
        score += 10;
    else
        score += roll;

    return score;
}

int main() {
    std::string s = "1-2/3 4-5/6-7-8/9";
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}