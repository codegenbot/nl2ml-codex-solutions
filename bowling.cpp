int score(string s) {
    int frame = 1;
    int total = 0;
    int i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            total += 10;
            if (s[i+2] == 'X') {
                total += 10;
                if (s[i+4] == 'X') {
                    total += 10;
                } else if (s[i+4] == '-') {
                    total += 0;
                } else {
                    total += s[i+4] - '0';
                }
                i++;
            } else if (s[i+2] == '/') {
                total += 10;
            } else if (s[i+2] == '-') {
                total += 0;
            } else {
                total += s[i+2] - '0';
            }
            i++;
        } else if (s[i+1] == '/') {
            total += 10;
            if (s[i+2] == 'X') {
                total += 10;
            } else if (s[i+2] == '-') {
                total += 0;
            } else {
                total += s[i+2] - '0';
            }
            i += 2;
        } else if (s[i+2] == '/') {
            total += 10;
            i += 3;
        } else if (s[i] == '-') {
            i++;
        } else {
            total += s[i] - '0';
            total += s[i+1] - '0';
            i += 2;
        }
        frame++;
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}