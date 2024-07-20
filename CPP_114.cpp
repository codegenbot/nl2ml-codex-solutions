Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LONG_LONG_MAX;
    for (long long num : nums) {
        sum += num;
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0)
            sum = 0;
    }
    return min_sum;
}