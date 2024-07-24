#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int rightmost_leader = nums.back();
    
    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] >= rightmost_leader) {
            rightmost_leader = nums[i];
            result.push_back(rightmost_leader);
        }
    }
    
    reverse(result.begin(), result.end());
    return result;
}