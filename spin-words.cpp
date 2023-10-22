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
        int start = 0;
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                int len = i - start;
                if (len < 5) {
                    ans += s.substr(start, len + 1);
                } else {
                    ans += s.substr(start, len + 1);
                    reverse(ans.begin() + ans.length() - len - 1, ans.end());
                }
                start = i + 1;
            }
        }
        int len = s.length() - start;
        if (len < 5) {
            ans += s.substr(start, len);
        } else {
            ans += s.substr(start, len);
            reverse(ans.begin() + ans.length() - len, ans.end());
        }
        cout << ans << endl;
    }
    return 0;
}
