Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0) {
            int left = i;
            while (left > 0 && sum >= 1) {
                sum -= nums[left--];
            }
            if (sum < min_sum)
                min_sum = sum + nums[i];
        }
    }
    return min_sum;
}