#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
For example,
input:
RRRR
RRRR
output:
0
4
input:
BOYG
GYOB
output:
4
0
input:
WYYW
BBOG
output:
0
0
input:
GGGB
BGGG
output:
2
2
input:
BBBB
OOOO
output:
0
0
*/
int main() {
    string code, guess;
    cin >> code >> guess;
    int code_count[6] = {0}, guess_count[6] = {0};
    int black = 0, white = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            code_count[code[i] - 'A']++;
            guess_count[guess[i] - 'A']++;
        }
    }
    for (int i = 0; i < 6; i++) {
        white += min(code_count[i], guess_count[i]);
    }
    //the reason for the second whites parsing is because
    // BBBB\nYWYW -> 2\n1
    //when it should be
    //BBBB\nYWYW -> 2\n2
    white -= black;
    cout << white << endl << black << endl;
}
