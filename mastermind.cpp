int mastermind(string code, string guess) {
    vector<char> chars = {'0', '1', '2', '3', '4', '5'};
    
    int black = 0;
    int white = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = chars[6];
            guess[i] = chars[6];
        }
    }

    vector<int> codeCount(6, 0);
    for(int i = 0; i < 4; i++) {
        int j = 0;
        while(j < 6 && chars[j] != code[i]) j++;
        codeCount[j]++;
    }

    for(int i = 0; i < 4; i++) {
        int count = 0;
        for(int j = 0; j < 6; j++) {
            if(code[j] == guess[i]) {
                count++;
                codeCount[static_cast<int>(std::distance(std::begin(chars), std::find(std::begin(chars), std::end(chars), code[j]))) ]--;
                if(count > 1) break;
            }
        }
        white += min(count, static_cast<int>(std::distance(std::begin(chars), std::find(std::begin(chars), std::end(chars), code[0]))));
    }

    return black + white;
}