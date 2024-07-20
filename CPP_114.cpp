```cpp
long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        long long sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if (sum < min_sum) {
                min_sum = sum;
            }
        }
    }
    return min_sum;
}

int main() {
    vector<long long> input = {1, -1};
    assert(minSubArraySum(input) == -1);
    return 0;
}