vector<int> findLeaders(vector<int>& nums) {
    vector<int> leaders;
    int max_right = INT_MIN;
    
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= max_right) {
            max_right = nums[i];
            leaders.push_back(max_right);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}