#include <iostream>
#include <vector>
using namespace std;

int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(22, 0);
    for (char c : s) {
        if (c == 'X') {
            scores[ball++] = 10;
            scores[ball++] = 0;
            frame++;
        } else if (c == '/') {
            scores[ball - 1] = 10 - scores[ball - 2];
            frame++;
        } else if (c == '-') {
            scores[ball++] = 0;
        } else {
            scores[ball++] = c - '0';
        }
    }
    for (int i = 0; i < 10; i++) {
        if (scores[i * 2] == 10) {
            total += 10 + scores[i * 2 + 1] + scores[i * 2 + 2];
            if (scores[i * 2 + 1] == 10 && scores[i * 2 + 2] != 0 && i < 9) {
                total += scores[i * 2 + 3];
            }
        } else {
            total += scores[i * 2] + scores[i * 2 + 1];
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