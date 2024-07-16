int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (stoi(s.substr(frame * 2, 1)) + stoi(s.substr(frame * 2 + 1, 1)));
            frame++;
        } else {
            int pins = stoi(c) + stoi(s.substr(frame * 2 + 1, 1));
            if (pins == 10) {
                score += 10;
                frame++;
            } else {
                score += pins;
                frame++;
            }
        }
    }
    return score;
}