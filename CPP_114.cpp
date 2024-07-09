#include <vector>
#include <cassert>

long long minSubArraySum(const std::vector<long long>& nums) {
    long long min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        long long current_sum = 0;
        for (int j = i; j < nums.size(); j++) {
            current_sum += nums[j];
            if (current_sum < min_sum) {
                min_sum = current_sum;
            }
        }
    }
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    // Add more test cases here as needed
    return 0;
}