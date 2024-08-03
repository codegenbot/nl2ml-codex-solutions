#include <vector>
using namespace std;

int minSubArraySum(vector<long long> nums) {
    int min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            min_sum = min(min_sum, sum);
        }
    }
    return min_sum;
}