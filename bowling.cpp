int bowling(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + max(roll, 10);
            roll = 0;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
        } else if (isdigit(c)) {
            roll++;
        }
    }
    return score;
}