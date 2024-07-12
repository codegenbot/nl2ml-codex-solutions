int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white_pegs = 0, black_pegs = 0;
    map<char, int> code_freq, guess_freq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black_pegs++;
        } else {
            code_freq[code[i]]++;
            guess_freq[guess[i]]++;
        }
    }
    
    for (auto& it : code_freq) {
        white_pegs += min(it.second, guess_freq[it.first]);
    }
    
    cout << white_pegs << "\n" << black_pegs << endl;
    
    return 0;
}