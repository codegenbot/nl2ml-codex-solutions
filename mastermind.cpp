#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int codeFreq[26] = {0};
    int guessFreq[26] = {0};

    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 26; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
            codeFreq[code[i] - 'A'] += 1;
            guessFreq[guess[i] - 'A'] += 1;
        }
    }

    whitePegs -= blackPegs;
    if (whitePegs < 0) whitePegs = 0;

    for (char c : code) ++codeFreq[c - 'A'];
    for (char c : guess) ++guessFreq[c - 'A'];

    for (int i = 0; i < 26; ++i) whitePegs += min(codeFreq[i], guessFreq[i]) - (codeFreq[i] + guessFreq[i] >= 2 ? min(codeFreq[i], guessFreq[i]) - 1 : 0);

    cout << whitePegs << " " << blackPegs << endl;

    return 0;
}