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
Given a starting height and a height after the ﬁrst bounce of a dropped ball, calculate the bounciness index (height of ﬁrst bounce / starting height). Then, given a number of bounces, use the bounciness index to calculate the total distance that the ball travels across those bounces.
For example,
input:
1.001
1.0
1
output:
2.001
input:
100.0
99.999
20
output:
3999.599534511501
input:
100.0
1.0
20
output:
102.02020201974588
input:
15.319
5.635
1
output:
20.954
input:
2.176
1.787
1
output:
3.963
*/
double bounciness(double h1, double h2, int n) {
    double bouncinessIndex = h2 / h1;
    double distance = h1 + h2;
    for (int i = 1; i < n; i++) {
        distance += 2 * h1 * pow(bouncinessIndex, 2 * i);
    }
    return distance;
}
int main() {
    double h1, h2;
    int n;
    cin >> h1 >> h2 >> n;
    cout << bounciness(h1, h2, n) << endl;
    return 0;
}
