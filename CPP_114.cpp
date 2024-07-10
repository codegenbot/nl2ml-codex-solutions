#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long sum = 0;
    long long res = LLONG_MAX;
    
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        res = min(res, sum);
        
        if (sum < 0)
            sum = 0;
    }
    
    return res;
}