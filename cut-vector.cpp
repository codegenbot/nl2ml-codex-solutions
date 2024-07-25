#include <vector>
#include <climits>
#include <iostream>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 1; i < nums.size(); ++i) {
        int diff = abs(nums[i] - nums[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    return {{nums.begin(), nums.begin() + cutIndex}, {nums.begin() + cutIndex, nums.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [" << "[";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "]";
    return 0;
}