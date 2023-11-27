#include <iostream>
#include <string>

int calculateScore(std::string input) {
    int score = 0;
    int frame = 0;
    int rolls = 0;
    int frames[10] = {0};

    for (char ch : input) {
        if (ch == 'X') {
            frames[frame] += 10;
            if (frame < 9) {
                frames[frame+1] += 10 - (10 - rolls % 10);
                if (frame < 8 && input[rolls+2] != '/')
                    frames[frame+2] += 10 - (10 - rolls % 10);
                else if (frame < 8 && input[rolls+2] == '/')
                    frames[frame+2] += 10 - (10 - rolls % 10) + (10 - frames[frame+1]);
            }
            rolls++;
        } else if (ch == '/') {
            frames[frame] += (10 - frames[frame]);
            if (frame < 9) {
                frames[frame+1] += 10 - frames[frame];
            }
            rolls++;
        } else if (ch == '-') {
            rolls++;
        } else {
            frames[frame] += (ch - '0');
            rolls++;
        }

        if (rolls % 2 == 0) {
            frame++;
        }
    }

    for (int i = 2; i <= rolls; i += 2) {
        score += frames[i - 2];
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;

    int score = calculateScore(input);
    std::cout << score << std::endl;

    return 0;
}