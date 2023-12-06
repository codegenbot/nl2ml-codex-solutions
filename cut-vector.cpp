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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

*/
int main() {
    vector<int> vec;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int left = 0, right = 0;
    for (int i = 1; i <= m; i++) {
        if (vec[i] - vec[left] > vec[right] - vec[i]) {
            left = i;
        } else {
            right = i;
        }
    }
    cout << "The two resulting subvectors are: ";
    for (int i = 0; i < n; i++) {
        if (i == left) {
            cout << "[";
        }
        cout << vec[i] << " ";
        if (i == right) {
            cout << "]";
        }
    }
    cout << endl;
    return 0;
}