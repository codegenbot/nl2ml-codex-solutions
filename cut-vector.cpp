#include <iostream>
#include <vector>
#include <limits>
#include <cmath>
#include <climits>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
        if(cin.eof()) break;  // Check for end-of-file (EOF)
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int suffixSum = sum - prefixSum;
        int diff = abs(prefixSum - suffixSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << " ";
    }
    
    cout << endl;
    
    for (int i = cutIndex + 1; i < n; i++) {
        cout << nums[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}