Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LONG_LONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum > min_sum)
            return min_sum;
        if (i == nums.size() - 1 || sum < 0) {
            min_sum = min(min_sum, sum);
            sum = 0;
        }
    }
    return min_sum;
}