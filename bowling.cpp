#include <iostream>
#include <string>

int scoreOfRound(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    while (frame <= 10) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            if (frame < 10) {
                if (bowls[bowlIndex + 2] == '/') {
                    score += 10;
                } else {
                    score += (bowls[bowlIndex + 1] - '0') + (bowls[bowlIndex + 2] - '0');
                }
                bowlIndex += 1;
            } else {
                score += (bowls[bowlIndex + 1] - '0') + (bowls[bowlIndex + 2] - '0');
                bowlIndex += 2;
            }
        } else if (bowls[bowlIndex + 1] == '/') {
            score += 10;
            if (frame < 10) {
                score += (bowls[bowlIndex + 2] - '0');
            }
            bowlIndex += 2;
        } else {
            score += (bowls[bowlIndex] - '0') + (bowls[bowlIndex + 1] - '0');
            bowlIndex += 2;
        }

        frame++;
    }

    return score;
}

int main() {
    std::string bowls;
    std::cout << "Enter the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> bowls;

    int score = scoreOfRound(bowls);
    std::cout << "The score of the round is: " << score << std::endl;

    return 0;
}