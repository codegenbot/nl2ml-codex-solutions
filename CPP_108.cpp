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
            bool hasNegativeDigit = false;
            num = -num; // convert to positive
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                if (digit < 0) {
                    hasNegativeDigit = true;
                    break;
                }
                sum += digit;
                num /= 10;
            }
            if (!hasNegativeDigit && sum > 0) {
                count++;
            }
        }
    }
    return count;
}