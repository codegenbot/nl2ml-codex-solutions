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
Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.
For example,
input:
1
output:
1
0
0
0
input:
2
output:
2
0
0
0
input:
3
output:
3
0
0
0
input:
4
output:
4
0
0
0
input:
5
output:
0
1
0
0
*/
int main() {
    int n;
    cin >> n;
    int q = n / 25;
    int d = (n - q * 25) / 10;
    int n = (n - q * 25 - d * 10) / 5;
    int p = n - q * 25 - d * 10 - n * 5;
    cout << p << endl;
    cout << n << endl;
    cout << d << endl;
    cout << q << endl;
}
