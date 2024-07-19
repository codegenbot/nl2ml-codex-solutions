#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double median(const vector<int>& l) {
    sort(l.begin(), l.end());
    int n = l.size();
    return n % 2 == 0 ? (l[n / 2 - 1] + l[n / 2]) / 2.0 : l[n / 2];
}