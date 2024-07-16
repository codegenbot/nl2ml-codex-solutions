#include <vector>
#include <iostream>
#include <string>

using namespace std;

struct MastermindResult {
    int white;
    int black;
};

MastermindResult mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        white += min(codeCount[i], guessCount[i]);
    }

    return {white, black};
}

int main() {
    string code;
    cin >> code;
    string guess;
    cin >> guess;

    MastermindResult result = mastermind(code, guess);

    cout << result.white << endl;
    cout << result.black << endl;

    return 0;
}