int main() {
    string code, guess;
    cin >> code >> guess;
    int black = 0, white = 0;
    vector<int> count(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            count[code[i] - 'A']++;
            count[guess[i] - 'A']--;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        if (count[i] > 0) {
            white += count[i];
        }
    }
    
    white = max(white, 0);
    
    cout << white << endl << black << endl;
    
    return 0;
}