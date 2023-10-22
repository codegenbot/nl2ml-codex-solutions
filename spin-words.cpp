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
        string word;
        string str;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (word.size() >= 5) {
                    reverse(word.begin(), word.end());
                    str += word;
                } else {
                    str += word;
                }
                str += ' ';
                word = "";
            } else {
                word += s[i];
            }
        }
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
            str += word;
        } else {
            str += word;
        }
        cout << str << endl;
    }
    return 0;
}
