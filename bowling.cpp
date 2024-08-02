int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - roll);
            }
            roll = 0;
        } else if (isdigit(c)) {
            roll++;
        } else {
            score += (int)(c - '0');
            roll = 0;
        }
    }
    return score;
}