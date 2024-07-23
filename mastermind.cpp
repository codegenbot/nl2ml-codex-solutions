int main() {
    string code, guess;
    cin >> code >> guess;
    int black = 0, white = 0;
    map<char, int> codeFreq, guessFreq;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }

    for (auto it = codeFreq.begin(); it != codeFreq.end(); ++it) {
        white += min(it->second, guessFreq[it->first]);
    }

    cout << white << endl << black << endl;

    return 0;
}