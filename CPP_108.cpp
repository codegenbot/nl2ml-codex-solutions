int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = abs(num);

        if (temp == 0) {
            count++;
        } else {
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}