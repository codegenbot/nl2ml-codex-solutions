char calculateFrameScore(char bowlScore, int index, const std::string& bowls) {
    if (bowls[index] == 'X') {
        return 10 + ((index + 1 < bowls.length() && bowls[index + 1] == 'X') ? 10 : (bowls[index + 1] - '0')) + ((index + 2 < bowls.length() && bowls[index + 2] == 'X') ? 10 : (bowls[index + 2] - '0'));
    } else if (index % 2 == 1 && bowls[index] == '/') {
        return 10 - (bowls[index - 1] - '0') + ((index + 1 < bowls.length() && bowls[index + 1] == 'X') ? 10 : (bowls[index + 1] - '0'));
    } else {
        return bowlScore;
    }
}