Here is the completed code:

int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num < 0) {
            num = -num;
        }
        int sum_digits = 0;
        while (num > 0) {
            sum_digits += num % 10;
            num /= 10;
        }
        if (sum_digits > 0) {
            count++;
        }
    }
    return count;
}