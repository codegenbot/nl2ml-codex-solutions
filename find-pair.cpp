#include <vector>
#include <iostream>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    }
    return make_pair(-1, -1);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& x : nums) cin >> x;

    int target;
    cin >> target;

    pair<int, int> result = findPair(nums, target);

    if (result.first != -1) {
        cout << result.first << "\n" << result.second << "\n";
    } else {
        cout << "No such pair found.\n";
    }

    return 0;
}