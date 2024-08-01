#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

double median(vector<int> l) {
    sort(l.begin(), l.end());
    int n = l.size();
    return (n % 2 == 0) ? (l[n/2 - 1] + l[n/2]) / 2.0 : l[n/2];
}

int main() {
    assert(abs(median({8, 1, 3, 9, 9, 2, 7}) - 7) < 1e-4);
    cout << "Test Passed" << endl;
    return 0;
}