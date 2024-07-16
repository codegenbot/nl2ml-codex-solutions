#include <vector>
#include <limits> // for INT_MIN
#include <algorithm> // for reverse
#include <climits> // for INT_MIN

using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int maxRight = INT_MIN;
    
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}