Here's the solution:

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n && i % 2 == 0; i += 2) {
        int sum = 0;
        for (int j = 2; j <= (n - i) / 2 && j % 2 == 0; j += 2) {
            if ((sum + j) > n)
                break;
            sum += j;
        }
        if (sum == i)
            return true;
    }
    return false;
}