int scoreBowlingRound(const string& bowls) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size(); ++i) {
        if (frame == 10) break;
        if (bowls[i] == 'X') {
            score += 10;
            if (bowls[i + 2] == 'X') score += 10;
            else if (bowls[i + 3] == '/') score += 10;
            else score += (bowls[i + 1] == 'X' ? 10 : bowls[i + 1] - '0') + (bowls[i + 2] == 'X' ? 10 : bowls[i + 2] - '0');
            ++frame;
            continue;
        }
        if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            score += (bowls[i + 1] == 'X' ? 10 : bowls[i + 1] - '0');
            ++frame;
            continue;
        }
        if (bowls[i] == '-') {
            continue;
        }
        score += bowls[i] - '0';
        if (bowls[i + 1] == '/') {
            score += 10 - (bowls[i] - '0');
            ++frame;
        }
        ++i;
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << scoreBowlingRound(bowls) << endl;
    return 0;
}