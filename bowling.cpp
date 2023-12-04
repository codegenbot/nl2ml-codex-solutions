```
#include <string>
#include <iostream>

using namespace std;

int calculateScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == '/') {
            score += 10 - stoi(bowls.substr(i + 1, 2));
        } else if (bowls[i] == 'X') {
            score += 10;
        } else {
            score += stoi(bowls.substr(i, 2));
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateScore(bowls) << endl;
    return 0;
}