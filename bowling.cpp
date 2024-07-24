int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll * 10);
            roll = 0;
        } else {
            int temp = c - '0';
            if (roll < 2) {
                score += temp;
                roll++;
            } else {
                score += temp;
                roll--;
            }
        }
    }
    return score;
}