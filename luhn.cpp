int luhn(const vector<int>& card) {
    int sum = 0;
    bool alternate = false;

    for (int i = card.size() - 1; i >= 0; i--) {
        int digit = card[i];

        if (alternate) {
            digit *= 2;

            // subtract 9 from the result if it is over 9
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        alternate = !alternate;
    }

    return sum;
}