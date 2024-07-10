#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = numeric_limits<int>::min();

    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(nums[i]);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}