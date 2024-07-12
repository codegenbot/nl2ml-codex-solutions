#include <iostream>
using namespace std;

int score(string s) {
    int total = 0, frame = 0, i = 0;
    while (frame < 10) {
        if (s[i] == 'X') {
            total += 10 + ((s[i + 2] == 'X') ? 10 : (s[i + 2] == '/') ? 10 - (s[i + 1] - '0') : s[i + 1] - '0' + s[i + 2] - '0');
            i++;
        } else if (s[i + 1] == '/') {
            total += 10 + ((s[i + 2] == 'X') ? 10 : s[i + 2] - '0');
            i += 2;
        } else {
            total += (s[i] == '-' ? 0 : s[i] - '0') + (s[i + 1] == '-' ? 0 : s[i + 1] - '0');
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