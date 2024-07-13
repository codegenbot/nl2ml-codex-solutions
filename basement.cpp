```c++
int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum = nums[i]; // reset sum
        if (sum < 0) return i;
        sum += nums[i];
    }
    return -1;
}