#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long total = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < min_sum) {
            min_sum = total;
        }
        if (total > 0) {
            total = 0;
        }
    }

    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    std::cout << "Error: The input array is invalid. Please check the problem description for valid inputs." << std::endl;
    return 0;
}