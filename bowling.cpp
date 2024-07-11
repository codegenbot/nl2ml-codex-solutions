int bowlingScore(const string& s) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (s[i + 1] == 'X') ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
                score += (s[i + 2] == 'X') ? 10 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 10);
                frame++;
            }
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
            score += (s[i + 1] == 'X') ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
            frame++;
        } else if (isdigit(s[i])) {
            score += s[i] - '0';
            if (frame < 10 && s[i + 1] == '/') {
                score += 10 - (s[i] - '0');
                frame++;
            }
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}