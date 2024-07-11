Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long sum = 0;
    long long min_sum = INT_MAX;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum > 0) {
            min_sum = min(min_sum, sum);
        } else {
            sum = 0;
        }
    }
    return min_sum;
}