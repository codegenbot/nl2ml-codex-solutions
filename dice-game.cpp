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
    double sum = 0;
    if (n > m) {
        for (int i = m + 1; i <= n; ++i) {
            sum += 1.0 / n / (1 - 1.0 / m * (i - 1));
        }
        printf("%.3f\n", sum);
    } else if (n == m) {
        printf("%.3f\n", 0.5);
    } else {
        for (int i = n + 1; i <= m; ++i) {
            sum += 1.0 / m / (1 - 1.0 / n * (i - 1));
        }
        printf("%.3f\n", 1 - sum);
    }
    return 0;
}
