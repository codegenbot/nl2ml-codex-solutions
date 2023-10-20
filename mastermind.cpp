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
vector<int> mastermind(string code, string guess) {
    vector<int> res(2, 0);
    int cnt[6] = {0};
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            res[0]++;
        } else {
            cnt[code[i]-'A']++;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (code[i] != guess[i] && cnt[guess[i]-'A'] > 0) {
            res[1]++;
            cnt[guess[i]-'A']--;
        }
    }
    return res;
}
int main() {
    string code = "WYYW";
    string guess = "BBOG";
    vector<int> res = mastermind(code, guess);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}
