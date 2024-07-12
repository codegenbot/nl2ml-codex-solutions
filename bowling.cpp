#include <iostream>

int bowlingScore(std::string s) {
    int score = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i + 2] == 'X') {
                score += 10 + (s[i + 4] == 'X' ? 10 : s[i + 4] - '0');
            } else {
                score += (s[i + 2] == '/' ? 10 : s[i + 2] - '0' + (s[i + 3] == '/' ? 10 : s[i + 3] - '0'));
            }
            i++;
        } else if (s[i + 1] == '/') {
            score += 10 + (s[i + 2] == 'X' ? 10 : s[i + 2] - '0');
            i += 2;
        } else {
            score += (s[i] == '-' ? 0 : s[i] - '0') + (s[i + 1] == '-' ? 0 : s[i + 1] - '0');
            i += 2;
        }
        frame++;
    }
    return score;
}
int main() {
    std::string s;
    std::cin >> s;
    std::cout << bowlingScore(s) << std::endl;
    return 0;
}