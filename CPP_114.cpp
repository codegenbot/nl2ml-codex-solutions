Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0;
    long long min_sum = LLONG_MAX;
    
    for (long long num : nums) {
        sum += num;
        min_sum = min(min_sum, sum);
        
        if (sum > 0) {
            sum = 0;
        }
    }
    
    return min_sum;
}