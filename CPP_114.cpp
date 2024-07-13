Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long sum = 0, min_sum = INT64_MAX;
    for(long long i : nums) {
        sum += i;
        min_sum = min(min_sum, sum);
    }
    return min_sum;
}