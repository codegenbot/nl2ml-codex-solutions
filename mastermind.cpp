int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for (int j = 0; j < 4; ++j) {
                if (guess[j] == code[i] && i != j) {
                    whitePegs++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                whitePegs++;
            }
        }
    }

    return blackPegs + whitePegs - 4;
}