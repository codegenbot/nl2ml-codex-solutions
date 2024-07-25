int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += abs(digit);
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            num = -num;
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += abs(digit);
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}