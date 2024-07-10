#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int,int> numMap;
    
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if(numMap.find(complement) != numMap.end()) {
            return vector<int> {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    
    throw runtime_error("No pair found");
}