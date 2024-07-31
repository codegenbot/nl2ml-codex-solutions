#include <iostream>
#include <vector>
#include <limits>

// Here is the completed code:
long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = std::numeric_limits<long long>::max(), current_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum < min_sum)
            min_sum = current_sum;
        if (current_sum > 0) {
            long long temp_sum = 0;
            for (int j = i; j < nums.size(); j++) {
                temp_sum += nums[j];
                if (temp_sum < min_sum)
                    min_sum = temp_sum;
            }
        }
    }
    return min_sum;
}

int main() {
    // Call your minSubArraySum function here
    return 0;
}