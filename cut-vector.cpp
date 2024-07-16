#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < nums.size(); ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    return 0;
}