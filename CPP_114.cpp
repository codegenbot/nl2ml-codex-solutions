long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];

        if (current_sum < min_sum) {
            min_sum = current_sum;
        }

        if (current_sum > 0) {
            int start = i;
            while (start < nums.size() && current_sum >= 1) {
                current_sum -= nums[start];
                start++;
            }
            if (start - i < nums.size()) {
                long long temp_sum = 0;
                for (int j = i; j < start; j++) {
                    temp_sum += nums[j];
                }
                if (temp_sum < min_sum) {
                    min_sum = temp_sum;
                }
            }
        }
    }

    return min_sum;
}