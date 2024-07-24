int luhn(vector<int> card) {
    int sum = 0;
    bool doubleDigit = false;

    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];
        if (doubleDigit) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        doubleDigit = !doubleDigit;
    }

    return sum;
}