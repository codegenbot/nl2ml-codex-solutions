/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
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

int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    int min_diff = INT_MAX;
    int index = 0;
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i - 1]);
        if (diff < min_diff) {
            min_diff = diff;
            index = i;
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        if (i == index) {
            cout << 0 << endl;
        } else {
            cout << nums[i] << endl;
        }
    }
    return 0;
}
