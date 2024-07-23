int score(string s) {
    int total = 0;
    int frame = 1;
    for (int i = 0; i < s.size(); ++i) {
        if (frame > 10) break;
        if (s[i] == 'X') {
            total += 10;
            if (s[i+2] == 'X') {
                total += 10 + (s[i+4] == 'X' ? 10 : s[i+4] - '0');
            } else {
                total += (s[i+2] == '/' ? 10 : s[i+2] - '0') + (s[i+4] == '/' ? 10 : s[i+4] - '0');
            }
            ++frame;
        } else if (s[i] == '/') {
            total += 10 - (s[i-1] - '0');
            total += (s[i+1] == 'X' ? 10 : s[i+1] - '0');
            ++frame;
        } else {
            total += s[i] - '0';
            if (s[i+1] == '/') {
                total += 10 - (s[i] - '0');
            }
            ++i;
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