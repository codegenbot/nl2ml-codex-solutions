#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 0;
    int bowl = 0;

    for (char ch : input) {
        if (ch == 'X') {
            score += 10;
            if (frame < 9) {
                score += (input[bowl + 1] == 'X') ? 10 : (input[bowl + 1] - '0');
                score += (input[bowl + 2] == 'X') ? 10 : (input[bowl + 2] == '/' ? 10 - (input[bowl + 1] - '0') : (input[bowl + 2] - '0'));
            }
            bowl++;
        } else if (ch == '/') {
            score += 10 - (input[bowl - 1] - '0');
            if (frame < 9) {
                score += (input[bowl + 1] == 'X') ? 10 : (input[bowl + 1] - '0');
            }
            bowl++;
        } else if (ch == '-') {
            // do nothing
        } else {
            score += ch - '0';
            if (frame < 9 && input[bowl + 1] == '/') {
                score += 10 - (ch - '0');
            }
        }

        bowl++;
        if (frame < 9 && (ch == 'X' || input[bowl - 1] == '/')) {
            frame++;
        }
    }

    return score;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    int score = calculateScore(input);
    std::cout << score << std::endl;

    return 0;
}