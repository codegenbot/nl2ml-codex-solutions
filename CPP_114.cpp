long long minSubArraySum(vector<long long> nums) {
    long long currentSum = 0, minSum = nums[0];
    
    for (long long num : nums) {
        currentSum = min(num, currentSum + num);
        minSum = min(minSum, currentSum);
    }
    
    return minSum;
}