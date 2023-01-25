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
Given a positive integer, square each digit and concatenate the squares into a returned string.
For example,
input:
0
output:
0
input:
1
output:
1
input:
2
output:
4
input:
3
output:
9
input:
4
output:
16
*/
int main() {
    int n;
    cin >> n;
    string s = to_string(n);
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        int temp = s[i] - '0';
        res += to_string(temp * temp);
    }
    cout << res << endl;
    return 0;
}
