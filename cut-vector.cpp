#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].insert(result[0].end(), nums.begin(), nums.begin() + splitIndex);
    result[1].insert(result[1].begin(), nums.begin() + splitIndex, nums.end());
    
    return result;
}