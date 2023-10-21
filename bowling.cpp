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
int main() {
    string input;
    vector<int> scores;
    vector<int> bonus;
    while(getline(cin, input)) {
        scores = vector<int>(input.size(), 0);
        bonus = vector<int>(input.size(), 0);
        int count = 0;
        for(int i = 0; i < input.size(); i++) {
            if(input[i] == 'X') {
                scores[i] = 10;
                bonus[i] = 2;
                count++;
            } else if(input[i] == '/') {
                scores[i - 1] = 10 - scores[i - 1];
                bonus[i - 1] = 1;
                count++;
            } else if(input[i] == '-') {
                scores[i - 1] = 0;
                bonus[i - 1] = 0;
                count++;
            } else {
                scores[i] = input[i] - '0';
                count++;
            }
        }
        int sum = 0;
        for(int i = 0; i < input.size(); i++) {
            sum += scores[i];
        }
        if(count == input.size()) {
            for(int i = input.size() - 1; i >= 0; i--) {
                if(bonus[i] == 1) {
                    sum += scores[i + 1];
                } else if(bonus[i] == 2) {
                    sum += scores[i + 1];
                    sum += scores[i + 2];
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
