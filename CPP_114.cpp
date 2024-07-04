#include<stdio.h>
#include<vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = nums[0], current_sum = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        current_sum = min(nums[i], current_sum + nums[i]);
        min_sum = min(min_sum, current_sum);
    }
    return min_sum;
}