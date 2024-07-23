int main() {
    string code, guess;
    cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    
    for(int i = 0; i < 4; ++i) {
        if(code[i] == guess[i]) {
            blackPegs++;
            code[i] = ' ';
            guess[i] = ' ';
        }
    }
    
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            if(code[i] == guess[j] && code[i] != ' ') {
                whitePegs++;
                code[i] = ' ';
                guess[j] = ' ';
                break;
            }
        }
    }
    
    cout << whitePegs << endl;
    cout << blackPegs << endl;
    
    return 0;
}