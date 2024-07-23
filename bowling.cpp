int calculateBowlingScore(string input) {
    int score = 0;
    int frame = 0;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : input) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame - 1];
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
        } else {
            frames[frame] += c - '0';
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (i < 9 && frames[i] == 10) {
            score += frames[i + 1];
            if (frames[i + 1] == 10) {
                score += frames[i + 2];
            }
        } else if (i < 9 && frames[i] + frames[i + 1] == 10) {
            score += frames[i + 1];
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateBowlingScore(input) << endl;
    return 0;
}