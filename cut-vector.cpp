#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int target = sum / 2;
    int prefixSum = 0;
    int idx = 0;
    
    for (int i = 0; i < n; ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            idx = i;
            break;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subvector2(nums.begin() + idx + 1, nums.end());
    
    for (int num : subvector1) {
        cout << num << endl;
    }
    for (int num : subvector2) {
        cout << num << endl;
    }
    
    return 0;
}