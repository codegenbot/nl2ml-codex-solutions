Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long sum = 0, min_sum = numeric_limits<long long>::max();
    for(int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if(sum > 0) min_sum = min(min_sum, sum);
        else sum = 0;
    }
    return min_sum == numeric_limits<long long>::max() ? 0 : min_sum;
}