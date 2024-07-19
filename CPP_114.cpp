```cpp
int main() {
    vector<long long> nums = {1, -1};
    cout << minSubArraySum(nums) << endl;
    return 0;
}

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum > 0) {
            min_sum = min(min_sum, sum);
        } else {
            sum = 0;
        }
    }
    return min_sum;
}