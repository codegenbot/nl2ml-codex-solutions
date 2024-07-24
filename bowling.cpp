int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll - 1);
            roll++;
        } else {
            int points = c - '0';
            if (points == 10) {
                score += 10 + (roll - 1);
                roll++;
            } else {
                score += points;
                roll++;
            }
        }
    }
    return score;
}