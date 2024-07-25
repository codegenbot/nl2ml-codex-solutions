int bowlingScore(string bowls) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size() && frame < 10; ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            if (bowls[i+2] == 'X') {
                score += 10 + (bowls[i+4] == 'X' ? 10 : bowls[i+4] - '0');
            } else {
                score += (bowls[i+2] == '/' ? 10 : bowls[i+2] - '0' + (bowls[i+4] == '/' ? 10 : bowls[i+4] - '0'));
            }
            ++frame;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i-1] - '0');
            score += (bowls[i+1] == 'X' ? 10 : bowls[i+1] - '0');
            ++frame;
        } else if (bowls[i] == '-') {
            continue;
        } else {
            score += bowls[i] - '0';
            if (bowls[i+1] == '/') {
                score += 10 - (bowls[i] - '0');
            }
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << bowlingScore(bowls) << endl;
    return 0;
}