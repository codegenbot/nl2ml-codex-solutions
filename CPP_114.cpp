```cpp
long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (long long num : nums) {
        current_sum += num;
        if (current_sum < min_sum) {
            min_sum = current_sum;
        }
        if (current_sum > 0) {
            current_sum = 0;
        }
    }

    return min_sum;
}

int main() {
    vector<long long> nums = {1, -1};
    cout << minSubArraySum(nums) << endl;
    return 0;
}