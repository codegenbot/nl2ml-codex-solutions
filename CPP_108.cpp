int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                sum += abs(temp % 10);
                temp /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0;
            int temp = -num;
            bool isNegative = true;
            while (temp != 0) {
                if (isNegative) {
                    sum -= abs(temp % 10);
                } else {
                    sum += abs(temp % 10);
                }
                temp /= 10;
                isNegative = !isNegative;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}