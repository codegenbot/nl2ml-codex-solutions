#include <vector>
#include <unordered_map>
#include <iostream>
#include <ostream>

using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    
    pair<int, int> result = findPair(nums, target);
    if(result.first != 0) {
        cout << result.first << " ";
        cout << result.second << endl;
    } else {
        cout << "No two elements sum to the target." << endl;
    }
    return 0;
}