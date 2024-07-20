long long minSubArraySum(vector<long long> nums){
    long long sum = 0;
    long long min_sum = LLONG_MAX;
    
    for(long long i = 0; i < nums.size(); ++i) {
        sum = 0;
        for(long long j = i; j < nums.size(); ++j) {
            sum += nums[j];
            min_sum = min(min_sum, sum);
        }
    }
    return min_sum;
}