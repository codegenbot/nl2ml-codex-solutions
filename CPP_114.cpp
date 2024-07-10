Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0;
    long long mini_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum > 0 && sum < mini_sum) {
            mini_sum = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }

    return mini_sum;
}