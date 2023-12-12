```
#include <vector>
#include <iostream>
#include <climits>
#include <tuple>
using namespace std;

vector<int> cutVector(vector<int> nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        
        int currentDiff = abs(leftSum - rightSum);
        
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex);
    vector<int> rightSubvector(nums.begin() + cutIndex, nums.end());
    
    leftSubvector.push_back(0);
    rightSubvector.push_back(0);
    
    return {leftSubvector, rightSubvector};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> leftSubvector, rightSubvector;
    tie(leftSubvector, rightSubvector) = cutVector(nums);
    
    for (int num : leftSubvector) {
        cout << num << endl;
    }
    
    for (int num : rightSubvector) {
        cout << num << endl;
    }
    
    return 0;
}
```