#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < n; i++) {
        int diff = abs(accumulate(vec.begin(), vec.begin() + i, 0) - accumulate(vec.begin() + i, vec.end(), 0));
        if (diff == 0 || diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; i++) {
        cout << vec[i] << endl;
    }
    cout << endl;
    for (int i = cutIndex; i < n; i++) {
        cout << vec[i] << endl;
    }
    
    return 0;
}