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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/


int getScore(string s) {
    int score = 0;
    int i = 0;
    while(i < s.size()) {
        if(s[i] == 'X') {
            score += 10;
            if(s[i+1] == 'X') {
                score += 10;
                if(s[i+2] == 'X') {
                    score += 10;
                } else {
                    score += s[i+2] - '0';
                }
            } else if(s[i+1] == '/') {
                score += 10;
            } else {
                score += s[i+1] - '0';
            }
            i++;
        } else if(s[i] == '/') {
            score += 10;
            if(s[i-1] == 'X') {
                score += 10;
            } else {
                score += s[i-1] - '0';
            }
            if(s[i+1] == 'X') {
                score += 10;
            } else {
                score += s[i+1] - '0';
            }
        } else if(s[i] == '-') {
            score += 0;
        } else {
            score += s[i] - '0';
        }
        i++;
    }
    return score;
}

int main() {
    string s1 = "XXXXXXXXXXXX";
    string s2 = "5/5/5/5/5/5/5/5/5/5/5";
    string s3 = "7115XXX548/279-X53";
    string s4 = "532/4362X179-41447/5";
    cout << getScore(s1) << endl;
    cout << getScore(s2) << endl;
    cout << getScore(s3) << endl;
    cout << getScore(s4) << endl;
    return 0;
}
