```
#include <climits>

int minSubArraySum(std::vector<int> nums) {
    int min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if (sum < min_sum) {
                min_sum = sum;
            }
        }
    }
    return min_sum;
}