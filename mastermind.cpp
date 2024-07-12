#include <bits/stdc++.h>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong places (white pegs)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
        else if(std::count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    // Count the number of correct colors in correct places (black pegs)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    return {white, black};
}