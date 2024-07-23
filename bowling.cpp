```c++
#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll1 = 0; 
    int roll2 = 0; 

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += (10 - roll1) * 2;
            break;
        } else {
            int val = c - '0';
            if (roll1 == 0) {
                roll1 = val;
            } else {
                if (roll1 + val >= 10) {
                    score += 10;
                    roll1 = 0;
                    roll2 = val;
                } else {
                    roll1 = 0;
                    roll2 = val;
                }
            }
        }
    }
    return score;
}

int main() {
    std::string input;
    // Read input from user
    std::cout << "Enter the bowling scores (X for strike, / for spare): ";
    std::cin >> input;

    int result = bowlingScore(input);

    std::cout << "The total score is: " << result << std::endl;

    return 0;
}