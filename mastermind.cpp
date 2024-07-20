#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else {
            int count = 0;
            for(int j=0; j<4; j++) {
                if(code[i] == guess[j])
                    count++;
            }
            if(count > 0)
                white += count - 1;
        }
    }
    return black + white;