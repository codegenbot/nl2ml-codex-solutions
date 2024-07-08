#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int pos = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    return {{vector<int>(nums.begin(), nums.begin() + pos)}, {vector<int>(nums.begin() + pos, nums.end())}};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
    }
    vector<vector<int>> result = cutVector(nums);
    cout << "[";
    for (const auto &num : result[0][0]) {
        cout << num << " ";
    }
    cout << "] [";
    for (auto it = result[1][0].begin(); it != result[1][0].end(); ++it) {
        cout << *it << " ";
    }
    std::cout << "] ]" << std::endl;
    return 0;
}