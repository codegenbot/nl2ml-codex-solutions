#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 0;
    int bowlIndex = 0;

    while (frame < 10) {
        char bowl = bowls[bowlIndex];

        if (bowl == 'X') {
            score += 10;
            if (frame < 9) {
                score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
                score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
            }
            bowlIndex++;
        } else if (bowl == '/') {
            score += (10 - (bowls[bowlIndex - 1] - '0'));
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
            bowlIndex++;
        } else {
            score += (bowl - '0');
        }

        bowlIndex++;
        frame++;
    }

    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;

    int score = calculateScore(bowls);
    std::cout << score << std::endl;

    return 0;
}