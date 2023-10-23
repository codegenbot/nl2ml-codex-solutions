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
2 1
output:
0.0
input:
1 2
output:
0.5
input:
100 99
output:
0.49
input:
99 100
output:
0.5
input:
1 100
output:
0.0
*/
int main() {
    int n, m;
    cin >> n >> m;
    double peter = 0.0;
    double colin = 0.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                peter++;
            }
            colin++;
        }
    }
    cout << peter / colin << endl;
    return 0;
}
