#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;
    
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = '-';
            guess[i] = '-';
        }
    }
    
    for(int i = 0; i < 4; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(code[j] == guess[i] && code[j] != '-') {
                count++;
                code[j] = '-';
            }
        }
        white += count - (black > 0);
    }
    
    return black + white;
}