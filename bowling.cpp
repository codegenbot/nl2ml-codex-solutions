int score(const string &s) {
    int total = 0;
    int frame = 0;
    int rolls = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (rolls >= 20) break;
        if (s[i] == 'X') {
            total += 10;
            if (frame < 9) {
                total += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : s[i + 1] - '0' + s[i + 2] - '0'));
            }
            if (frame < 8 && s[i + 2] == 'X') {
                total += (s[i + 4] == 'X' ? 10 : (s[i + 4] == '/' ? 10 - (s[i + 3] - '0') : s[i + 3] - '0' + s[i + 4] - '0'));
            }
            rolls++;
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            total += (s[i + 1] == 'X' ? 10 : s[i + 1] - '0');
            rolls += 2;
            frame++;
        } else {
            total += (s[i] - '0');
            rolls++;
            if (s[i + 1] == '-') frame++;
        }
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}