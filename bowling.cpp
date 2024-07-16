int scoreOfRound(string bowls) {
    int score = 0;
    int frame = 0;
    int i = 0;
    while (frame < 10) {
        if (bowls[i] == 'X') {
            score += 10;
            score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] == '/') ? 10 - (bowls[i + 1] - '0') : bowls[i + 1] - '0' + bowls[i + 2] - '0';
            i++;
        } else if (bowls[i + 1] == '/') {
            score += 10;
            score += (bowls[i + 2] == 'X') ? 10 : bowls[i + 2] - '0';
            i += 2;
        } else {
            score += bowls[i] - '0' + bowls[i + 1] - '0';
            i += 2;
        }
        frame++;
    }
    return score;
}
int main() {
    string bowls;
    cin >> bowls;
    cout << scoreOfRound(bowls) << endl;
    return 0;
}