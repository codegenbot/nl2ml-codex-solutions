int score(string s) {
    int res = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            res += 10;
            res += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : s[i + 1] - '0' + s[i + 2] - '0'));
            i += 2;
        } else if (s[i + 1] == '/') {
            res += 10;
            res += (s[i + 2] == 'X' ? 10 : s[i + 2] - '0');
            i += 3;
        } else {
            res += (s[i] == '-' ? 0 : s[i] - '0') + (s[i + 1] == '-' ? 0 : s[i + 1] - '0');
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