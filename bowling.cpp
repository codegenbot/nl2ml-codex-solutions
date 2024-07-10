int score(string s) {
    int res = 0, frame = 1, i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            res += 10;
            res += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/') ? 10 - s[i + 1] + 10 : s[i + 1] + s[i + 2] - '0' * 2;
            i++;
        } else if (s[i + 1] == '/') {
            res += 10;
            res += (s[i + 2] == 'X') ? 10 : s[i + 2] - '0';
            i += 2;
        } else {
            res += s[i] + s[i + 1] - '0' * 2;
            i += 2;
        }
        frame++;
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}