vector<int> leaders(const vector<int>& nums) {
    vector<int> result;
    int maxRight = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            result.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
}