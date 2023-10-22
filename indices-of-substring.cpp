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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
*/
vector<int> solution(string T, string P) {
    int n = T.size();
    int m = P.size();
    std::vector<int> res;
    for(int i = 0; i <= n - m; ++i) {
        int j = 0;
        for(; j < m && T[i + j] == P[j]; ++j);
        if(j == m) res.push_back(i);
    }
    return res;
}
int main() {
    string T, P;
    cin >> T >> P;
    vector<int> res = solution(T, P);
    for(int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
