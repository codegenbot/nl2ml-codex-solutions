long long minSubArraySum(vector<long long> nums){
    long long minSum = nums[0];
    long long currentSum = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        currentSum = min(nums[i], currentSum + nums[i]);
        minSum = min(minSum, currentSum);
    }
    
    return minSum;
}