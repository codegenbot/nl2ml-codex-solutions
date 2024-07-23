vector<int> findLeaders(vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int max_right = INT_MIN;
    
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= max_right) {
            max_right = nums[i];
            leaders.push_back(nums[i]);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}