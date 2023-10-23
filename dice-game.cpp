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
float f(int k, int m) {
    return 1.0 / (m*k);
}
float g(int i, int j, int n, int m) {
    float res = 0.0;
    if (j == m && i == n - 1) {
        res += f(i, j);
        return res;
    }
    if (j < m) res += g(i, j + 1, n, m);
    if (i < n) res += g(i + 1, j, n, m);
    return res;
}
int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << g(0, 0, a, b) << endl;
    }
    return 0;
}
