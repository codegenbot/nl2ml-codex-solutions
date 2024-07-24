#include <climits>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    int min_diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        int diff1 = nums[i] - nums[0];
        int diff2 = nums[n-1] - nums[i-1];
        if (std::abs(diff1-diff2) < std::abs(min_diff)) {
            min_diff = diff1 - diff2;
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            nums.erase(nums.begin());
        }
    }
    
    if (!nums.empty()) {
        result.push_back(nums);
    }

    return result;