int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    int balls[21] = {0};

    for (char c : s) {
        if (c == 'X') {
            balls[frame++] = 10;
        } else if (c == '/') {
            balls[frame++] = 10 - balls[frame - 1];
        } else if (c == '-') {
            balls[frame++] = 0;
        } else {
            balls[frame++] = c - '0';
        }
    }

    for (int i = 0; i < 10; ++i) {
        if (balls[i * 2] == 10) {
            score += 10 + balls[i * 2 + 2] + balls[i * 2 + 3];
            if (balls[i * 2 + 2] == 10) {
                score += balls[i * 2 + 4];
            }
        } else if (balls[i * 2] + balls[i * 2 + 1] == 10) {
            score += 10 + balls[i * 2 + 2];
        } else {
            score += balls[i * 2] + balls[i * 2 + 1];
        }
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}