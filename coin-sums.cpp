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

int pennies, nickles, dimes, quarters;
int count(int cents) {
    pennies = cents;
    nickles = cents / 5;
    pennies -= nickles * 5;
    dimes = cents / 10;
    pennies -= dimes * 10;
    quarters = cents / 25;
    pennies -= quarters * 25;
    return nickles + dimes + quarters;
}

int main() {
    int cents;
    cin >> cents;
    int ans = count(cents);
    cout << ans << endl;
    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    return 0;
}
