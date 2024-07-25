#include <vector>
#include <iostream>
#include <numeric>
#include <climits>
using namespace std;

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        prefixSum += nums[i];
        int diff = std::abs(sum - 2 * prefixSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cutIndex + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}