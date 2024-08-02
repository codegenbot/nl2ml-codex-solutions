#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

int main() {
    vector<int> vec;
    int num;
    
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int n = vec.size();
    int diff = INT_MAX;
    int idx = 0;
    
    for (int i = 1; i < n; ++i) {
        int left_sum = accumulate(vec.begin(), vec.begin() + i, 0);
        int right_sum = accumulate(vec.begin() + i, vec.end(), 0);
        
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            idx = i;
        }
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << vec[i] << endl;
    }
    
    cout << endl;
    
    for (int i = idx; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}