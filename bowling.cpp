#include <iostream>
int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(21, 0);
    
    for (char c : s) {
        if (c == 'X') {
            scores[ball++] = 10;
            if (frame < 10) frame++;
        } else if (c == '/') {
            scores[ball - 1] = 10 - scores[ball - 1];
            scores[ball++] = 10;
            if (frame < 10) frame++;
        } else if (c == '-') {
            scores[ball++] = 0;
        } else {
            scores[ball++] = c - '0';
            if (frame < 10) {
                if (ball % 2 == 0) frame++;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (scores[i * 2] == 10) {
            total += 10 + scores[i * 2 + 1] + scores[i * 2 + 2];
        } else if (scores[i * 2] + scores[i * 2 + 1] == 10) {
            total += 10 + scores[i * 2 + 2];
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