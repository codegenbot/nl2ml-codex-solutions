vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int i : x) {
        bool has_even_digit = false;
        int n = i;
        while (n > 0) {
            int digit = n % 10;
            if (digit % 2 == 0) {
                has_even_digit = true;
                break;
            }
            n /= 10;
        }
        if (!has_even_digit) {
            result.push_back(i);
        }
    }
    sort(result.begin(), result.end());
    return result;
}