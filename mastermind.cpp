#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    vector<int> codeFreq(6, 0), guessFreq(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeFreq[code[i] - 'A' - 'A']++;
            guessFreq[guess[i] - 'A' - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        white += min(codeFreq[i], guessFreq[i]);
    }

    cout << white << endl << black << endl;
    
    return 0;
}