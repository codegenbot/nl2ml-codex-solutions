int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    vector<char> code_chars(code.begin(), code.end());
    vector<char> guess_chars(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (code_chars[j] == guess[i]) {
                count++;
            }
        }
        if (count > 0) {
            white += count - 1;
        }
    }

    return black + white;
}