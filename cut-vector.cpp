#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int min_idx = -1;
    for(int i=0; i<n-1; i++){
        int diff = nums[i+1] - nums[i];
        if(diff == 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
        else if(diff > 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
    }
    if(min_idx == -1) {
        vector<int> res;
        return {{res}, {res}};
    } 
    else {
        vector<int> left(min_idx+1), right(n-min_idx-1);
        for(int i=0; i<=min_idx; i++) left.push_back(nums[i]);
        for(int i=min_idx+1; i<n; i++) right.push_back(nums[i]);
        return {{left}, {right}};
    }
}