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
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
*/
int main() {
    int n, m;
    cin >> n >> m;
    long double res = 0;
    if (n == 1 && m == 1) {
        cout << 0 << endl;
        return 0;
    }
    if (n == m) {
        cout << 0.5 << endl;
        return 0;
    }
    if (n < m) {
        swap(n, m);
    }
    long double total = n * m;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            res += (m - 1) / total;
        } else if (i == n) {
            res += (m - 1) / total;
        } else {
            res += (m - 1) / total * 2;
        }
    }
    cout << res << endl;
    return 0;
}
