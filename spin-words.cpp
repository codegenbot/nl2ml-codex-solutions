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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
*/
int main() {
    string s;
    while (getline(cin, s)) {
        string res;
        int i = 0, j = 0;
        while (j < s.size()) {
            while (j < s.size() && s[j] != ' ') j++;
            if (j - i >= 5) {
                for (int k = j - 1; k >= i; k--) {
                    res += s[k];
                }
            } else {
                for (int k = i; k < j; k++) {
                    res += s[k];
                }
            }
            if (j < s.size()) {
                res += ' ';
            }
            i = ++j;
        }
        cout << res << endl;
    }
    return 0;
}
