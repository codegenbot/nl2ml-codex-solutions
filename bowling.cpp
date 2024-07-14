int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            rolls++;
        } else if (c == '/') {
            score += 10 + (10 - (int)s[rolls] - (int)s[rolls+1]);
            rolls+=2;
        } else {
            int roll = c - '0';
            score += roll;
            if (rolls < 9) {
                s[rolls] = '/';
                rolls++;
            }
        }
    }

    return score;
}