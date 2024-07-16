int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    map<char, int> codeCount, guessCount;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++codeCount[code[i]];
            ++guessCount[guess[i]];
        }
    }
    
    for (auto it = codeCount.begin(); it != codeCount.end(); ++it) {
        white += min(it->second, guessCount[it->first]);
    }
    
    cout << white << endl << black << endl;
    
    return 0;
}