int main() {
    string code, guess;
    cin >> code >> guess;

    int whitePegs = 0, blackPegs = 0;
    map<char, int> codeFreq, guessFreq;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }

    for (auto &p : codeFreq) {
        whitePegs += min(p.second, guessFreq[p.first]);
    }

    cout << whitePegs << "\n" << blackPegs << endl;

    return 0;
}