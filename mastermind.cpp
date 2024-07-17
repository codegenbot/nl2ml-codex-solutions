int mastermind(const std::string& code, const std::string& guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        if (std::count(code.begin(), code.end(), c) > 0) {
            white++;
        }
    }

    return black;
}