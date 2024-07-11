int score(string input) {
    int totalScore = 0;
    int frame = 1;
    int ball = 0;
    int rolls[21] = {0};

    for (char c : input) {
        if (c == 'X') {
            rolls[ball++] = 10;
            if (frame < 10) {
                rolls[ball++] = 0;
            }
            frame++;
        } else if (c == '/') {
            rolls[ball - 1] = 10 - rolls[ball - 2];
            if (frame < 10) {
                rolls[ball++] = 0;
            }
            frame++;
        } else if (c == '-') {
            rolls[ball++] = 0;
            frame++;
        } else {
            rolls[ball++] = c - '0';
            if (frame % 2 == 0 || c == '9') {
                frame++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i * 2] == 10) {
            totalScore += 10 + rolls[i * 2 + 2] + rolls[i * 2 + 3];
            if (rolls[i * 2 + 2] == 10) {
                totalScore += rolls[i * 2 + 4];
            }
        } else if (rolls[i * 2] + rolls[i * 2 + 1] == 10) {
            totalScore += 10 + rolls[i * 2 + 2];
        } else {
            totalScore += rolls[i * 2] + rolls[i * 2 + 1];
        }
    }

    return totalScore;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}