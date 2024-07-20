#include <vector>
#include <iostream>
using namespace std;

int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            guess[i] = ' '; // mark the correct place as visited
            code[i] = ' '; // mark the correct place as visited
        }
    }
    return blackPegs;
}

int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    vector<char> codeCounts(6, 0);
    for (int i = 0; i < 4; ++i) {
        codeCounts[code[i]]++;
    }
    for (int i = 0; i < 4; ++i) {
        if (guess[i] != ' ') { // only consider unvisited positions
            codeCounts[guess[i]]--;
        }
    }
    int totalCorrectColors = 0;
    for (int i = 0; i < 6; ++i) {
        if (codeCounts[i]) totalCorrectColors += codeCounts[i];
    }
    return totalCorrectColors - countBlackPegs(code, guess);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int blackPegs = countBlackPegs(code, guess);
    int whitePegs = countWhitePegs(code, guess);
    cout << whitePegs << endl;
    cout << blackPegs << endl;
    return 0;
}