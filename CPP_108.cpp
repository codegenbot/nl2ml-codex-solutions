int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            num = -num; // make it positive for calculation
            int sum = 0;
            bool is_negative = true;
            while (num > 0) {
                if (!is_negative) {
                    sum += num % 10;
                }
                num /= 10;
                is_negative = !is_negative; // toggle sign
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}