long long bowlingScore(const std::string& input) {
    long long score = 0;
    int currentRoll = 0;

    for (size_t i = 0; i < input.size(); ++i) { 
        char c = input[i];
        if (!((c >= '0' && c <= '9') || c == 'X' || c == '/')) {
            return -1;
        }

        if (c == 'X') {
            score += 10;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 5;
            currentRoll = 0;
        } else {
            if(c >= '0' && c <= '9') {
                currentRoll += c - '0';
            } else {
                currentRoll *= 10;
                currentRoll += c - '0';

                if(input.size() - i > 1) {
                    char nextC = input[i+1];
                    if(nextC >= '0' && nextC <= '9') {
                        int secondRoll = nextC - '0';
                        if(currentRoll + secondRoll == 10) {
                            score += 5;
                            currentRoll = secondRoll;
                        } else {
                            score += secondRoll;
                            currentRoll = 10 - currentRoll - secondRoll;
                        }
                    } else {
                        currentRoll = 10 - currentRoll;
                    }
                } else {
                    if(currentRoll < 10) {
                        score += currentRoll;
                    } else {
                        score += 10;
                        score += (currentRoll - 10);
                    }
                }
            }

            if(i == input.size() - 1 || ((c >= '0' && c <= '9'))) {
                if(currentRoll < 10) {
                    score += currentRoll;
                } else {
                    score += 10;
                    score += (currentRoll - 10);
                }
            }
        }
    }

    return score;
}