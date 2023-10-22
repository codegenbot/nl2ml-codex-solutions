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
    getline(cin, s);
    int start = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (i - start >= 5) {
                reverse(s.begin() + start, s.begin() + i);
            }
            start = i + 1;
        }
    }
    if (s.length() - start >= 5) {
        reverse(s.begin() + start, s.end());
    }
    cout << s << endl;
    return 0;
}
