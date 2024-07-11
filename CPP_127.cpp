#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end) return "NO";

    int len = end - start + 1;

    for (int i = 2; i * i <= len; i++) {
        if (len % i == 0) return "NO";
    }

    return "YES";
}