int bowlingScore(string s) {
    int score = 0, frame = 0, ball = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += (s[ball + 1] == 'X') ? 10 + ((s[ball + 2] == 'X') ? 10 : s[ball + 2] - '0') : (s[ball + 2] == '/') ? 10 : s[ball + 1] - '0' + s[ball + 2] - '0';
                ball++;
            }
            frame++;
        } else if (c == '/') {
            score += 10 - (s[ball - 1] - '0');
            score += (frame < 9) ? (s[ball + 1] == 'X') ? 10 : s[ball + 1] - '0' : 0;
            ball++;
            frame++;
        } else if (c == '-') {
            score += 0;
        } else {
            score += c - '0';
            if (frame < 9 && (c - '0' + s[ball - 1] - '0' == 10)) {
                score += s[ball + 1] == '/' ? 10 : s[ball + 1] - '0';
            }
            ball++;
            frame++;
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