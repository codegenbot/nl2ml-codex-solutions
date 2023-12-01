#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < bowls.length(); i++) {
        if (frame > 10) {
            break;
        }

        char bowl = bowls[i];

        if (bowl == 'X') {
            score += 10;

            if (frame < 10) {
                score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
                score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] - '0');
            }

            frame++;
        } else if (bowl == '/') {
            score += (10 - (bowls[i - 1] - '0'));

            if (frame < 10) {
                score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
            }

            frame++;
        } else if (bowl == '-') {
            // do nothing
        } else {
            score += (bowl - '0');

            if (frame < 10 && bowlIndex % 2 == 1) {
                if (bowls[i - 1] == '/') {
                    score += (bowls[i] - '0');
                }
            }

            bowlIndex++;
        }
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