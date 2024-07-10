int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit == 5 || digit == 0) continue;
                if (negative) {
                    if (digit > 1) break;
                    sum -= digit;
                } else {
                    sum += digit;
                }
                num /= 10;
                negative = !negative;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}