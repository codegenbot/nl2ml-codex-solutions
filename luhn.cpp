```
int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if ((i % 2 == 1)) {
            int temp = (digits[i] * 2) % 10 + ((digits[i] * 2) / 10);
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}