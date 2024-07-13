Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum > min_sum)
            break;
        min_sum = min(min_sum, sum);
    }
    return min_sum;
}