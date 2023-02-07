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
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    string res = "";
    // 取模取余数，然后把余数乘以自己，再把结果转换成字符串，放到res的前面
    while (n) {
        int tmp = n % 10;
        res = to_string(tmp * tmp) + res;
        n /= 10;
    }
    cout << res << endl;
    return 0;
}
