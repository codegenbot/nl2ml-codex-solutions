int calculateBowlingScore(string bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (frame > 10) break;
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[i + 1] == 'X') ? 10 : (isdigit(bowls[i + 1]) ? bowls[i + 1] - '0' : 10);
                score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] == '/' ? 10 - (bowls[i + 1] == 'X' ? 0 : bowls[i + 1] - '0') : (isdigit(bowls[i + 2]) ? bowls[i + 2] - '0' : 10));
            }
            ball = 0;
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] == 'X' ? 10 : bowls[i - 1] - '0');
            score += (bowls[i + 1] == 'X') ? 10 : (isdigit(bowls[i + 1]) ? bowls[i + 1] - '0' : 10);
            ball = 0;
            frame++;
        } else if (isdigit(bowls[i])) {
            score += bowls[i] - '0';
            ball++;
            if (ball == 2 || bowls[i + 1] == '/') {
                ball = 0;
                frame++;
            }
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateBowlingScore(bowls) << endl;
    return 0;
}