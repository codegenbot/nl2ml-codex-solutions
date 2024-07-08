```cpp
long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LONG_LONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        min_sum = min(min_sum, sum);
        if (sum > 0) {
            sum = 0;
        }
    }
    return min_sum;

}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    return 0;
}