```cpp
#include <string>

int getBonus(int a, int b) {
    if(a + b == 10) {
        return 10;
    } else {
        return a + b;
    }
}

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'X') {
            score += 10;
            if(currentFrame < 9) {
                char nextChar = (i+2<s.length())?s[i+2]:'/'; // Check the length to avoid out-of-range
                if(nextChar == '/') {
                    score += getBonus(10, (s[i+1] - '0'));
                    currentFrame++;
                } else {
                    score += 10 + (s[i+1] - '0');
                    currentFrame+=2;
                }
            } else {
                currentFrame++;
            }
        } else if(s[i] == '/') {
            int firstRoll = (s[i-1] - '0');
            score += getBonus(firstRoll, 10);
            currentFrame++;
        } else {
            int roll = s[i] - '0';
            score += roll;
            if(currentFrame < 10) {
                if(i+2<s.length() && s[i+1] == '/') {
                    currentFrame+=2;
                } else if(i+1<s.length()) {
                    score += getBonus(roll, (s[i+1] - '0'));
                    currentFrame++;
                } else {
                    break;
                }
            }
        }
    }
    return score;
}