```cpp
#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long total = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        min_sum = min(min_sum, total);
    }

    return min_sum;
}

int main() {
    // Add implementation for your function or any other functionality you need.
    assert(minSubArraySum({1, -1}) == -1);  
}